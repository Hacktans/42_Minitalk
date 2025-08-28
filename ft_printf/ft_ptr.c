/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:01:33 by hadalici          #+#    #+#             */
/*   Updated: 2024/11/05 00:09:05 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long nbr, char *base)
{
	long			written;
	unsigned long	len;

	len = ft_strlen(base);
	written = 0;
	if (nbr == 0)
		return (write(1, "(nil)", 5));
	written += ft_putstr("0x");
	if (nbr >= len)
		written += ft_putnbrbase(nbr / len, base);
	ft_putchar(base[nbr % len]);
	written++;
	return (written);
}
