/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 22:51:42 by kali              #+#    #+#             */
/*   Updated: 2025/08/19 00:02:34 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_strcmp(char *s1, char *s2);

/*
int main()
{
    char q1[] = "Compare two";
    char q2[] = "Compare two equal strings";

    int result = ft_strcmp(q1, q2);
    int test = '\0' - ' ';
    printf("Result: %d\n", result);
    printf("Test: %d", test);
}
*/

int    ft_strcmp(char *s1, char *s2)
{
    int stringtoints1;
    int stringtoints2;
    int sti;

    while (*s1 && *s2)
    {
        stringtoints1 = *s1;
        stringtoints2 = *s2;
        if (stringtoints1 < stringtoints2 || stringtoints1 > stringtoints2)
            return (stringtoints1 - stringtoints2);
        s1++;
        s2++;
    }

    if (*s1 == '\0' && *s2 != '\0')
    {
        sti = -*s2;
        return (sti);
    }
    else if (*s1 != '\0' && *s2 == '\0')
    {
        sti = *s1;
        return (sti);
    }
    return (0);
}