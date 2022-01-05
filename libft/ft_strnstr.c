/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:00:36 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 09:55:48 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	k;

	k = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen((char *)haystack) < ft_strlen(needle))
		return (0);
	while (*haystack && len--)
	{
		k = 0;
		while (haystack[k] == needle[k] && k <= len)
		{
			if (needle[k + 1] == '\0')
				return ((char *)haystack);
			k++;
		}
		haystack++;
	}
	return (0);
}
