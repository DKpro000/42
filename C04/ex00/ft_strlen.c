/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 03:28:39 by kali              #+#    #+#             */
/*   Updated: 2025/08/21 03:33:13 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

/*
int main()
{
    char string[] = "Hello World";
    int a = ft_strlen(string);
    printf("%d", a);
}
*/

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return count;
}