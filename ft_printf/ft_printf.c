/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:54:47 by hadalici          #+#    #+#             */
/*   Updated: 2024/11/07 19:06:27 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	a;

	len = 0;
	i = 0;
	va_start(a, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
			len += chk(str[++i], a);
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(a);
	return (len);
}
