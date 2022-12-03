/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:55:52 by znaoui            #+#    #+#             */
/*   Updated: 2021/11/30 15:59:36 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	vr;

	i = 0;
	vr = (unsigned char)c;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == vr)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
