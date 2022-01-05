/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:44:33 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 09:44:14 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	dstlen;
	size_t	srclen;

	k = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = dstlen;
	if (dstsize < dstlen + 1)
		return (dstsize + srclen);
	dstsize = dstsize - dstlen - 1;
	while (src[k] != '\0' && dstsize > 0)
	{
		dst[i] = src[k];
		i++;
		k++;
		dstsize--;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
