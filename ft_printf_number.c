/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:41:32 by tandroma          #+#    #+#             */
/*   Updated: 2021/12/14 17:43:16 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(long nbr)
{
	char	*str;
	int		len_print;

	len_print = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', 1);
		len_print += 1;
	}
	str = ft_itoa_for_different_base(nbr, 10, 'd');
	ft_putstr_fd(str, 1);
	len_print += ft_strlen(str);
	free(str);
	return (len_print);
}

int	ft_printf_u(unsigned int nbr)
{
	char	*str;
	int		len_print;

	len_print = 0;
	str = ft_itoa_for_different_base(nbr, 10, 'u');
	ft_putstr_fd(str, 1);
	len_print += ft_strlen(str);
	free(str);
	return (len_print);
}

int	ft_printf_p(unsigned long nbr)
{
	char	*str;
	int		len_print;

	len_print = 0;
	str = ft_itoa_for_different_base(nbr, 16, 'p');
	write(1, "0x", 2);
	ft_putstr_fd(str, 1);
	len_print += ft_strlen(str) + 2;
	free(str);
	return (len_print);
}

int	ft_printf_x_bigx(unsigned int nbr, const char *restrict format, int i)
{
	char	*str;
	int		len_print;

	len_print = 0;
	if (format[i + 1] == 'X')
		str = ft_itoa_for_different_base(nbr, 16, 'X');
	else
		str = ft_itoa_for_different_base(nbr, 16, 'x');
	ft_putstr_fd(str, 1);
	len_print += ft_strlen(str);
	free(str);
	return (len_print);
}
