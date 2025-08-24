/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 00:04:27 by kali              #+#    #+#             */
/*   Updated: 2025/08/19 00:11:59 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n);

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

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int stringtoints1;
    int stringtoints2;
    int sti;
    unsigned int count;

    count = 0;
    while (count < n)
    {
        stringtoints1 = *s1;
        stringtoints2 = *s2;
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
        if (stringtoints1 < stringtoints2 || stringtoints1 > stringtoints2)
            return (stringtoints1 - stringtoints2);
        s1++;
        s2++;
        count++;
    }
    return (0);
}
