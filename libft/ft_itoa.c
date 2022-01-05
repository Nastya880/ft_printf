/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:57:02 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/19 13:30:43 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	quality_raz(int k, int raz)
{
	while (k >= 10)
	{
		k = k / 10;
		raz++;
	}
	return (raz);
}

static char	*line(char *str, int raz, int i, int n)
{
	int	end;

	end = raz;
	while (i < end)
	{
		i++;
		raz--;
		str[raz] = n % 10 + 48;
		n = (n - n % 10) / 10;
	}
	str[end] = '\0';
	return (str);
}

static char	first_symbol_negative(char *str, int neg)
{
	if (neg == -1)
		str[0] = '-';
	return (str[0]);
}

char	*ft_itoa(int n)
{
	int		i;
	int		k;
	int		raz;
	int		neg;
	char	*str;

	i = 0;
	raz = 1;
	neg = 1;
	if (n == -2147483647 - 1)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		raz++;
		i = 1;
		neg = -1;
		n = n * (-1);
	}
	k = n;
	raz = quality_raz(k, raz);
	str = malloc(sizeof(char) * (raz + 1));
	if (str == NULL)
		return (NULL);
	str[0] = first_symbol_negative(str, neg);
	return (line(str, raz, i, n));
}
