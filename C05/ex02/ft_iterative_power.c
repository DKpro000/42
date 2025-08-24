/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:54:26 by kali              #+#    #+#             */
/*   Updated: 2025/08/23 08:57:58 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

// int ft_iterative_factorial(int nb);

// int main()
// {
//     int a = ft_iterative_factorial(5);
//     printf("%d\n", a);
// }

int ft_iterative_power(int nb, int power)
{
    int temp;

    temp = nb;
    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    while (power > 1)
    {
        nb = nb * temp;
        power--;
    }
    return (nb);
}