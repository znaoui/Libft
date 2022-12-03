/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:16:55 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/01 13:11:27 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	size_t	x;
	size_t	len_total;
	char	*final;

	i = 0;
	x = 0;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	len_total = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	final = malloc(sizeof(char) * (len_total + 1));
	if (!final)
		return (NULL);
	while (s1[y] != '\0')
		final[i++] = s1[y++];
	while (s2[x] != '\0')
		final[i++] = s2[x++];
	final[i] = '\0';
	return (final);
}
