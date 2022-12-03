/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:58:55 by znaoui            #+#    #+#             */
/*   Updated: 2021/11/30 14:48:42 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = ft_strlen((const char *)s) - 1;
	len = ft_strlen((const char *)s);
	c = (unsigned char)c;
	if (!c)
		return ((char *)&s[len]);
	while (len > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		len--;
		i--;
	}
	return (NULL);
}
