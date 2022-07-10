/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:31:12 by jnam              #+#    #+#             */
/*   Updated: 2022/07/10 15:02:45 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error_handling(int error_num)
{
	if (error_num == 0)
		ft_putstr("argc error : please put 3 arguments.\n");
	else if (error_num == 1)
		ft_putstr("pid error : check the server pid.\n");
	exit(1);
}

void	shift(char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & 0x80)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c <<= 1;
		bit++;
		usleep(500);
	}	
}

void	send_message(char *message, int pid)
{
	int	i;

	i = 0;
	while (message[i])
		shift(message[i++], pid);
	shift('\0', pid);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 2;
	if (argc < 3 || argv[2][0] == '\0')
		error_handling(0);
	pid = ft_atoi(argv[1]);
	if (pid < 101 || 99999 < pid)
		error_handling(1);
	ft_putstr("[client pid] ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	send_message("\n[client pid] ", pid);
	send_message(ft_itoa(getpid()), pid);
	send_message("\n", pid);
	while (argv[i])
	{
		send_message(argv[i++], pid);
		if (argv[i])
			shift(' ', pid);
	}
	exit(0);
}
