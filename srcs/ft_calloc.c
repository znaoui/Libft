/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:13:26 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/01 12:11:22 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*tab;
	size_t	i;

	i = 0;
	if (size == 0 || nmemb == 0)
	{
		size = 1;
		nmemb = 1;
	}
	tab = malloc(size * nmemb);
	if (!tab)
		return (NULL);
	if (tab)
		ft_bzero(tab, (size * nmemb));
	return (tab);
}
