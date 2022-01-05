/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:03:30 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/22 17:39:36 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*check;

	if (lst == NULL)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		check = ft_lstnew(f(lst -> content));
		if (check == NULL)
			ft_lstclear(&newlist, del);
		ft_lstadd_back(&newlist, check);
		lst = lst -> next;
	}
	return (newlist);
}
