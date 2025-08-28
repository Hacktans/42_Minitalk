/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:47:56 by hadalici          #+#    #+#             */
/*   Updated: 2025/04/10 16:53:33 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

volatile sig_atomic_t	g_flag = 0;

void	signal_handler(int signal)
{
	(void)signal;
	g_flag = 1;
}

void	send_message(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (!g_flag)
			;
		g_flag = 0;
		bit++;
	}
}

static int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = (10 * res) + (str[i] - 48);
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	char	*msg;
	int		pid;
	int		i;

	if (ac != 3)
	{
		ft_printf("Please enter 3 arguments\n");
		return (0);
	}
	signal(SIGUSR1, signal_handler);
	pid = ft_atoi(av[1]);
	if (kill(pid, 0) == -1 || pid == 0)
	{
		ft_printf("Invalid PID!\n");
		return (0);
	}
	msg = av[2];
	i = 0;
	while (msg[i])
		send_message(pid, msg[i++]);
	send_message(pid, '\0');
	return (0);
}
