/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 02:18:48 by kali              #+#    #+#             */
/*   Updated: 2025/08/23 02:21:17 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	base_len(char *base)
{
	int	len = 0;

	while (base[len])
		len++;
	return (len);
}

static int	isvalid(char *base)
{
	int i;
    int j;
	int len;

	len = base_len(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	putnbr_rec(unsigned long n, char *base, int blen)
{
	if (n >= (unsigned long)blen)
		putnbr_rec(n / blen, base, blen);
	ft_putchar(base[n % blen]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		blen;
	long	n;

	if (!isvalid(base))
		return ;
	blen = base_len(base);
	n = (long)nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	putnbr_rec((unsigned long)n, base, blen);
}
