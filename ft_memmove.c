/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:01:20 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/01 12:37:02 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t		i;

	if (!dest && !src && size >= 0)
		return (NULL);
	else if (!size)
		return (dest);
	if (src < dest)
	{
		i = size;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	printf("%s\n", ft_memmove("", "", 15));
	// printf("%s\n", memmove("", "", 15));
}*/
