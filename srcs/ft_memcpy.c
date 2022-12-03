/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:44:52 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/01 13:41:48 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*dest1;
	size_t			i;

	i = 0;
	dest1 = dest;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		dest1[i] = *(unsigned char *)src;
		src++;
		i++;
	}
	return (dest);
}
