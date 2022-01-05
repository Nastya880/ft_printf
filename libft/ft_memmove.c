/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:30:46 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 16:01:30 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*mysrc;
	unsigned char	*mydst;
	size_t			i;

	i = 0;
	mysrc = (unsigned char *)src;
	mydst = (unsigned char *)dst;
	if (mydst == NULL && mysrc == NULL)
		return (NULL);
	if (dst > src)
	{
		while ((int)(--len) >= 0)
			mydst[len] = mysrc[len];
	}
	else
	{
		while (i < len)
		{
			mydst[i] = mysrc[i];
			i++;
		}
	}
	return (dst);
}
