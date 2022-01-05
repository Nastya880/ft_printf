/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:57:34 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 16:00:45 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*mysrc;
	unsigned char	*mydst;
	int				i;

	i = 0;
	mysrc = (unsigned char *)src;
	mydst = (unsigned char *)dst;
	if (mysrc == NULL && mydst == NULL)
		return (NULL);
	while (n > 0)
	{
		mydst[i] = mysrc[i];
		i++;
		n--;
	}
	return (dst);
}
