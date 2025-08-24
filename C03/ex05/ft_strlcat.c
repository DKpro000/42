/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 05:07:34 by kali              #+#    #+#             */
/*   Updated: 2025/08/21 02:55:12 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen_(const char *s)
{
	unsigned int i = 0;
	while (s[i])
		i++;
	return i;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dlen = 0;
	unsigned int slen = ft_strlen_(src);
	unsigned int i;

	while (dlen < size && dest[dlen])
		dlen++;

	if (dlen == size)
		return size + slen;

	i = 0;
	while (src[i] && dlen + 1 + i < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';

	return dlen + slen;
}
