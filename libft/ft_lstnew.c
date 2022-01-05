/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:59:33 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/21 10:02:21 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_struct;

	new_struct = malloc(sizeof(t_list));
	if (new_struct == NULL)
		return (NULL);
	new_struct -> content = content;
	new_struct -> next = NULL;
	return (new_struct);
}
