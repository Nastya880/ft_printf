/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:25:50 by tandroma          #+#    #+#             */
/*   Updated: 2021/12/14 23:22:49 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	sz;
	int		i;

	i = 0;
	sz = 0;
	if (!s)
		return (7);
	while (s[i])
	{
		i++;
		sz++;
	}
	return (sz);
}
