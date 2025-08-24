/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 04:01:45 by kali              #+#    #+#             */
/*   Updated: 2025/08/23 02:12:24 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
    int   i = 0;
    int   negative = 0;
    long  value = 0;

    while (str[i] == ' ')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            negative++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {

        value = value * 10 + (str[i] - '0');
        i++;
    }
    if ((negative % 2) == 1)
        value = -value;
    if (value > 2147483647)
        return 2147483647;
    if (value < -2147483648) 
        return -2147483648;
    return value;
}

// int main()
// {
//     int a = ft_atoi("99999999999");
//     printf("%d", a);
// }
