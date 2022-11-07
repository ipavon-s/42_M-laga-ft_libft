/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:04:59 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/11/07 15:03:00 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pl;
	t_list	*list;

	if (!lst || !f)
		return (0);
	list = 0;
	while (lst)
	{
		pl = ft_lstnew(f(lst->content));
		if (!pl)
		{
			ft_lstclear(&list, del);
			return (0);
		}
		ft_lstadd_back(&list, pl);
		pl = pl->next;
		lst = lst->next;
	}
	return (list);
}
