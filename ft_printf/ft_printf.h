/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 00:14:31 by hadalici          #+#    #+#             */
/*   Updated: 2024/11/07 19:05:30 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char a);
int	ft_putnbrbase(long nbr, char *base);
int	ft_putstr(char *str);
int	ft_strlen(char *a);
int	chk(char c, va_list a);
int	ft_ptr(unsigned long nbr, char *base);

#endif
