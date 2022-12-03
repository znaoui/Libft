/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:17:52 by znaoui            #+#    #+#             */
/*   Updated: 2021/11/30 17:44:37 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	y;
	size_t	rep;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		rep = i;
		if (s1[i] == s2[0])
		{
			y = 0;
			while (s1[rep] && s2[y] && s1[rep] == s2[y] && rep < len)
			{
				rep++;
				y++;
			}
			if (s2[y] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
