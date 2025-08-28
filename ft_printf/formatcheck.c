/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:31:26 by hadalici          #+#    #+#             */
/*   Updated: 2024/11/07 19:05:17 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	chk(char c, va_list a)
{
	int		written;

	written = 0;
	if (c == 'c')
		written += ft_putchar(va_arg(a, int));
	else if (c == 's')
		written += ft_putstr(va_arg(a, char *));
	else if (c == 'd' || c == 'i')
		written += ft_putnbrbase(va_arg(a, int), "0123456789");
	else if (c == 'x')
		written += ft_putnbrbase(va_arg(a, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		written += ft_putnbrbase(va_arg(a, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
		written += ft_ptr((unsigned long)va_arg(a, void *), "0123456789abcdef");
	else if (c == 'u')
		written += ft_putnbrbase(va_arg(a, unsigned int), "0123456789");
	else if (c == '%')
		written += write(1, &c, 1);
	return (written);
}
