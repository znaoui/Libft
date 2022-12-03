/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:21:29 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/06 14:19:18 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	final = ft_lstnew(((*f)(lst->content)));
	if (!final)
		return (NULL);
	head = final;
	lst = lst->next;
	while (lst)
	{
		final->next = ft_lstnew(((*f)(lst->content)));
		if (!final->next)
		{
			ft_lstclear(&head, (*del));
			return (NULL);
		}
		final = final->next;
		lst = lst->next;
	}
	return (head);
}
