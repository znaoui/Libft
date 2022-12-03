/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:36:17 by znaoui            #+#    #+#             */
/*   Updated: 2021/11/29 17:06:47 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int nb, size_t size)
{
	char	*new;

	new = src;
	while (size)
	{
		*new = (unsigned char)nb;
		new++;
		size--;
	}
	return (src);
}
