/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:57:38 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/21 13:06:28 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mystruct;

	mystruct = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (mystruct -> next)
		mystruct = mystruct -> next;
	mystruct -> next = new;
}
