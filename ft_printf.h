/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:39:56 by tandroma          #+#    #+#             */
/*   Updated: 2021/12/16 11:59:41 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *restrict format, ...);
int		ft_printf_d(long nbr);
int		ft_printf_u(unsigned int nbr);
int		ft_printf_p(unsigned long nbr);
int		ft_printf_x_bigx(unsigned int nbr, const char *restrict format, int i);
char	*ft_itoa_for_different_base(unsigned long nbr, int base, char c);

#endif
