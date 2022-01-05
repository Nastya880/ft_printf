/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:06:52 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 09:19:26 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*val;
	int				i;

	i = 0;
	val = (unsigned char *)b;
	while (len > 0)
	{
		val[i++] = (unsigned char)c;
		len--;
	}
	return (b);
}
