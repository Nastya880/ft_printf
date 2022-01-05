/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:00:28 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 09:52:39 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	sym;
	char	*mys;

	sym = (char)c;
	mys = (char *)s;
	i = 0;
	while (mys[i])
	{
		if (mys[i] == sym)
			return (&mys[i]);
		i++;
	}
	if (c == '\0')
		return (&mys[i]);
	return (0);
}
