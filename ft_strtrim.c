/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:21:21 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/02 13:12:30 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!set || !s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	end = (ft_strlen(s1) - 1);
	while (s1[start] != '\0' && ft_is_set(set, s1[start]) == 1)
	{
		start++;
		len--;
	}
	while (end > start && ft_is_set(set, s1[end]) == 1)
	{
		end--;
		len--;
	}
	final = ft_substr(s1, start, len);
	return (final);
}
