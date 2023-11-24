/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsadik <ahsadik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:37:13 by ahsadik           #+#    #+#             */
/*   Updated: 2023/11/23 23:23:08 by ahsadik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr2;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		del(ptr->content);
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
	*lst = ptr;
}
