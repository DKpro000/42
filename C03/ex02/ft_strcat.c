/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 04:24:46 by kali              #+#    #+#             */
/*   Updated: 2025/08/19 21:36:38 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcat(char *dest, char *src);
/*
int main()
{
    char stringdest[20] = "Hello ";
    char stringsrc[] = "World!";
    char *string = ft_strcat(stringdest, stringsrc);
    printf("String: ");
    while (*string)
    {
        printf("%c", *string);
        string++;
    }
}
*/

char    *ft_strcat(char *dest, char *src)
{
    char *initialize;

    initialize = dest;
    while (*dest)
        dest++;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return (initialize);
}