/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:56:46 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/01 12:48:52 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*final;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	while (s[i] != '\0')
	{
		final[i] = (*f)(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
