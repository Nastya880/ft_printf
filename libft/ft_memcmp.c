/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:38:16 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 09:41:00 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mys1;
	unsigned char	*mys2;
	int				i;

	mys1 = (unsigned char *)s1;
	mys2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		n--;
		if (mys1[i] != mys2[i])
			return ((int)mys1[i] - mys2[i]);
		i++;
	}
	return (0);
}
