/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:35:44 by jnam              #+#    #+#             */
/*   Updated: 2022/06/26 02:00:05 by jnam             ###   ########.fr       */
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
		ft_putstr("status : create socket!\n");
	else if (status_num == 1)
		ft_putstr("status : listen\n");
	else if (status_num == 2)
		ft_putstr("status : accept\n");
	else if (status_num == 3)
		ft_putstr("status : recieve message...\n");
}

void	receive_message(int sig_num, struct __siginfo *info, void *vo)
{
	static char	c = 0xFF;
	static int	bit = 0;
	static int	pid = 0;

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
		ft_putchar_fd(c, 1);
		bit = 0;
		c = 0xFF;
	}
}

int	main(int argc, char *argv)
{
	struct sigaction	sa;

	if (argc != 1 || argv[1] != NULL)
		error_handler(0);
	sa.sa_sigaction = receive_message;
	sa.sa_flags = SA_SIGINFO;
	ft_putstr("pid : ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	handshake(1);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
