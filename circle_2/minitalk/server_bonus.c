/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:30:53 by jnam              #+#    #+#             */
/*   Updated: 2022/07/10 01:19:29 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error_handler(int error_num)
{
	if (error_num == 1)
		ft_putstr("argc error : please put 0 argument\n");
	exit(1);
}

void	handshake(int status_num)
{
	if (status_num == 0)
		ft_putstr("status : create server!\n");
	else if (status_num == 1)
		ft_putstr("status : listen\n");
}

void	receive_message(int sig_num, struct __siginfo *info, void *vo)
{
	static char	c = 0xFF;
	static int	bit = 0;
	static int	pid = 0;

	(void)*vo;
	if (pid != info->si_pid)
	{
		pid = info->si_pid;
		bit = 0;
		c = 0xFF;
	}
	if (sig_num == SIGUSR1)
		c |= 0x80 >> bit;
	else
		c ^= 0x80 >> bit;
	if (++bit == 8)
	{
		if (!c)
		{
			kill(pid, SIGUSR2);
		}
		write(1, &c, 1);
		bit = 0;
		c = 0xFF;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;

	if (argc != 1 || argv[1] != NULL)
		error_handler(0);
	sa.sa_sigaction = receive_message;
	sa.sa_flags = SA_SIGINFO;
	handshake(0);
	ft_putstr("[server pid] ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	handshake(1);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
