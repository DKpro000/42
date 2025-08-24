/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:17:33 by kali              #+#    #+#             */
/*   Updated: 2025/08/19 21:44:49 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

// int main()
// {
//     char stringdest[10] = "fwef";
//     char stringsrc[] = "tdhjtydd";
//     char *string = ft_strncat(stringdest, stringsrc, 10);
//     printf("String: ");
//     while (*string)
//     {
//         printf("%c", *string);
//         string++;
//     }
// }

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char          *initialize;
    unsigned int  c;

    initialize = dest;
    c = 0;
    while (*dest)
        dest++;
    
    while (*src && c < nb)
    {
        *dest = *src;
        dest++;
        src++;
        c++;
    }
    *dest = '\0';
    return (initialize);
}