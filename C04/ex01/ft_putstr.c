/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 03:34:43 by kali              #+#    #+#             */
/*   Updated: 2025/08/21 03:39:02 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str);

/*
int main()
{
    char string[] = "Hello World";
    ft_putstr(string);
}
*/

void ft_putstr(char *str)
{
    while (*str)
    {
        write(STDOUT_FILENO, str, 1);
        str++;
    }
}
