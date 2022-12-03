/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:14:45 by znaoui            #+#    #+#             */
/*   Updated: 2021/11/30 13:29:21 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	while (length && *first && (*first == *second))
	{
		first++;
		second++;
		length--;
	}
	if (length)
		return ((unsigned char)*first - (unsigned char)*second);
	else
		return (0);
}
