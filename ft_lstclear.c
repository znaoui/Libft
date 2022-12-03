/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:27:55 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/01 18:15:36 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst)
		return ;
	tmp = *lst;
	tmp2 = *lst;
	while (tmp2)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		(*del)(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
