/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:13:50 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/14 09:53:51 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	myc;
	char	*str;

	str = (char *)s;
	myc = (char)c;
	i = 0;
	while (str[i])
		i++;
	i++;
	while (i > 0)
	{
		i--;
		if (str[i] == myc)
			return (str + i);
	}
	return (0);
}
