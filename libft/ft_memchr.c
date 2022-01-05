/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:53:50 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/17 17:55:21 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	myc;

	myc = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (str[i] == myc)
			return (&str[i]);
		n--;
		i++;
	}
	return (0);
}
