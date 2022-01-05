/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:28:02 by tandroma          #+#    #+#             */
/*   Updated: 2021/10/19 16:10:51 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int	quality_raz(int number)
{
	int	raz;

	raz = 1;
	while (number >= 10)
	{
		raz++;
		number = number / 10;
	}
	return (raz);
}

static int	negative_to_positive(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		number;
	int		raz;
	char	character[11];

	if (n == -2147483648 && fd != -1)
		write(fd, "-2147483648", 11);
	else if (fd != -1)
	{
		n = negative_to_positive(n, fd);
		number = n;
		raz = quality_raz(number);
		while (raz > 0)
		{
			raz--;
			character[raz] = n % 10 + '0';
			n = n / 10;
		}
		character[quality_raz(number)] = n + '0';
		while (raz != quality_raz(number))
		{
			write(fd, &character[raz], 1);
			raz++;
		}
	}
}
