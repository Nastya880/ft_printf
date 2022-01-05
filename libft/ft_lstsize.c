/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:27:18 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/19 17:36:22 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*mystruct;
	int		len;

	len = 0;
	mystruct = lst;
	while (mystruct != NULL)
	{
		mystruct = mystruct -> next;
		len++;
	}
	return (len);
}
