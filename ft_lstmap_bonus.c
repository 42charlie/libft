/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:21:25 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/19 21:56:19 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*swx;
	t_list	*new;

	if (!lst || !f || !del)
		return (0);
	new = 0;
	while (lst)
	{
		swx = ft_lstnew(NULL);
		if (!swx)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		swx->content = f(lst->content);
		ft_lstadd_back(&new, swx);
		lst = lst->next;
	}
	return (new);
}
