/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:31:49 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/21 10:40:22 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*mystruct;

	if (lst == NULL)
		return (NULL);
	mystruct = lst;
	while (1)
	{
		if (mystruct -> next == NULL)
			return (mystruct);
		mystruct = mystruct -> next;
	}	
}
