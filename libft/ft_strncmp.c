/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:27:27 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 09:57:38 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*mys1;
	unsigned char	*mys2;

	i = 0;
	mys1 = (unsigned char *)s1;
	mys2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (mys1[i] && mys2[i] && mys1[i] == mys2[i] && n > 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		n--;
		i++;
	}
	return (mys1[i] - mys2[i]);
}
