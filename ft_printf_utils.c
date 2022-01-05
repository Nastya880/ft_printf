/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:41:42 by tandroma          #+#    #+#             */
/*   Updated: 2021/12/16 12:00:11 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_with_base(unsigned long n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

char	*ft_itoa_for_different_base(unsigned long nbr, int base, char c)
{
	unsigned long	n;
	char			*str;
	int				len;

	n = nbr;
	len = len_with_base(n, base);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = nbr % base;
		if (nbr % base > 9 && (c >= 'a' && c <= 'z'))
			str[len - 1] += 'a' - 10;
		else if (nbr % base > 9 && (c >= 'A' && c <= 'Z'))
			str[len - 1] += 'A' - 10;
		else
			str[len - 1] += '0';
		nbr = nbr / base;
		len--;
	}
	return (str);
}
