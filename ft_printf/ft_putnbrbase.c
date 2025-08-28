/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:13:52 by hadalici          #+#    #+#             */
/*   Updated: 2024/11/07 19:05:40 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(long nbr, char *base)
{
	long	written;
	long	len;

	len = ft_strlen(base);
	written = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		written++;
	}
	if (nbr >= len)
		written += ft_putnbrbase(nbr / len, base);
	ft_putchar(base[nbr % len]);
	written++;
	return (written);
}
