/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:35:18 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/22 18:43:42 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	symbol(const char *str, int i)
{
	if (str[i] == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long long int	num;

	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	neg = symbol(str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			num = num * 10 + (str[i] - 48);
		else
			return (num * neg);
		if (num * neg > 2147483647)
			return (-1);
		if (num * neg < -2147483648)
			return (0);
		i++;
	}
	return (num * neg);
}
