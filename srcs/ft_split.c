/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:05:50 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/08 10:23:10 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_charset(char str, char c)
{
	if (str == c)
		return (1);
	else
		return (0);
}

static size_t	ft_count_word(char const *str, char c)
{
	size_t	nb_word;
	size_t	i;

	i = 0;
	nb_word = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (ft_is_charset(str[i], c) == 1))
			i++;
		if (str[i] != '\0' && (ft_is_charset(str[i], c) == 0))
		{
			nb_word++;
			while (str[i] != '\0' && (ft_is_charset(str[i], c) == 0))
				i++;
		}
	}
	return (nb_word);
}

static char	*ft_malloc_word(char const *str, char c)
{
	char	*dest;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[len] != '\0' && (ft_is_charset(str[len], c) == 0))
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (str[i] != '\0' && (ft_is_charset(str[i], c) == 0))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	char	**split_str;
	int		x;
	int		i;

	x = 0;
	i = 0;
	if (!str)
		return (NULL);
	split_str = malloc(sizeof(char *) * (ft_count_word(str, c) + 1));
	if (!split_str)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (ft_is_charset(str[i], c) == 1))
			i++;
		if (str[i] != '\0' && (ft_is_charset(str[i], c) == 0))
		{
			split_str[x++] = ft_malloc_word(&str[i++], c);
			while (str[i] != '\0' && (ft_is_charset(str[i], c) == 0))
				i++;
		}
	}
	split_str[x] = 0;
	return (split_str);
}
