/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:28:17 by kali              #+#    #+#             */
/*   Updated: 2025/08/23 08:42:31 by kali             ###   ########.fr       */
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

int ft_iterative_factorial(int nb)
{
    int value;

    if (nb < 0)
        return (0);
    value = 1;
    while (nb > 1)
    {
        value *= nb;
        nb--;
    }
    return (value);
}