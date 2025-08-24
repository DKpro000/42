/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:46:01 by kali              #+#    #+#             */
/*   Updated: 2025/08/20 05:03:21 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);

/*
int main()
{
    char string[] = "ABCDEFU";
    char find[] = "";
    char *string1 = ft_strstr(string, find);
    while (*string1)
    {
        printf("%c\n", *string1);
        string1++;
    }
}
*/

int istrg(char *src, char *trg)
{
    while (*trg)
    {
        if (*src == *trg)
        {
            src++;
            trg++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}

char    *ft_strstr(char *str, char *to_find)
{
    int  istrgreturn;

    istrgreturn = 0;
    if (*to_find == '\0')
        return str;
    while (*str)
    {
        if (*str == *to_find)
        {
            istrgreturn = istrg(str, to_find);
            if (istrgreturn == 1)
                return str;
            else
                str++;
        }
        str++;
    }
    return (NULL);
}
