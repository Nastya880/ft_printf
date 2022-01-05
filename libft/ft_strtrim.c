/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:52:53 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/19 16:54:10 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_begin(char const *s1, char const *set)
{
	int	check;
	int	k;
	int	i;

	check = 0;
	k = 0;
	i = 0;
	while (s1[i] && check != 2)
	{
		k = 0;
		check = 0;
		while (set[k] && check == 0)
		{
			if (set[k] == s1[i])
				check = 1;
			k++;
		}
		if (check == 0)
			check = 2;
		else
			i++;
	}
	return (i);
}

static	int	check_end(char const *s1, char const *set)
{
	int	check;
	int	k;
	int	len;

	check = 0;
	k = 0;
	len = (int)ft_strlen(s1) - 1;
	while (len > 0 && check != 2)
	{
		k = 0;
		check = 0;
		while (set[k] && check == 0)
		{
			if (set[k] == s1[len])
				check = 1;
			k++;
		}
		if (check == 0)
			check = 2;
		else
			len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_string;
	int		i;
	int		len;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	i = check_begin(s1, set);
	len = check_end(s1, set);
	if (len - i + 1 < 0)
		trim_string = ft_substr(s1, i, 0);
	else
		trim_string = ft_substr(s1, i, len - i + 1);
	if (trim_string == NULL)
		return (NULL);
	return (trim_string);
}
