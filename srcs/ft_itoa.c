/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:01:43 by znaoui            #+#    #+#             */
/*   Updated: 2021/11/30 18:10:49 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_itoa(int len, long int nb, int n)
{
	long int	size_n;

	size_n = nb;
	if (nb == 0)
		return (1);
	while (size_n > 0)
	{
		size_n /= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char		*dest;
	long int	nb;
	int			len;

	nb = (long int)n;
	len = 0;
	if (n < 0)
		nb *= (-1);
	len = ft_len_itoa(len, nb, n);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len--] = '\0';
	while (nb > 0)
	{
		dest[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (len == 0 && n == 0)
		dest[len] = '0';
	if (n < 0)
		dest[len--] = '-';
	return (dest);
}
