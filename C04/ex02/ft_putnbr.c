/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:30:00 by yourlogin         #+#    #+#             */
/*   Updated: 2025/08/21 14:30:00 by yourlogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_putnbr(int nb)
{
    char inttostring;
    char negative;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
        negative = '-';
		write(STDOUT_FILENO, &negative, 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
    inttostring = nb % 10 + '0';
    write(1, &inttostring, 1);
}

/*
int main()
{
	ft_putnbr(-213);
}
*/
