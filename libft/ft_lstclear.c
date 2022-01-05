/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:37:02 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/21 11:48:06 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mystruct;

	mystruct = *lst;
	while (mystruct != NULL)
	{
		*lst = mystruct -> next;
		del(mystruct -> content);
		mystruct -> content = NULL;
		free(mystruct);
		mystruct = *lst;
	}
	*lst = NULL;
}
