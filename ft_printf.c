/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:40:33 by tandroma          #+#    #+#             */
/*   Updated: 2021/12/14 23:28:30 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

static int	specifier(va_list ap, const char *restrict format, int i)
{
	if (format[i + 1] == '%')
	{
		ft_putchar_fd(format[i], 1);
		return (1);
	}
	else if (format[i + 1] == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		return (1);
	}
	else if (format[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_printf_d(va_arg(ap, int)));
	else if (format[i + 1] == 'u')
		return (ft_printf_u(va_arg(ap, unsigned int)));
	else if (format[i + 1] == 'p')
		return (ft_printf_p(va_arg(ap, unsigned long)));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
		return (ft_printf_x_bigx(va_arg(ap, unsigned int), format, i));
	return (-1);
}

int	ft_printf(const char *restrict format, ...)
{
	va_list	ap;
	int		i;
	int		flag;
	int		len_print;

	len_print = 0;
	va_start(ap, format);
	i = -1;
	while (format[++i])
	{
		flag = 1;
		if (format[i] == '%')
		{
			flag = specifier(ap, format, i);
			if (flag == -1)
				return (len_print);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1);
		len_print += flag;
	}
	va_end(ap);
	return (len_print);
}
