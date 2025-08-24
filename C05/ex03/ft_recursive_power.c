/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:58:56 by kali              #+#    #+#             */
/*   Updated: 2025/08/23 08:59:55 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

// int ft_recursive_factorial(int nb);

// int main()
// {
//     int a = ft_recursive_factorial(5);
//     printf("%d\n", a);
// }

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    return (nb * ft_recursive_power(nb, power - 1));
}