/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:44:01 by jnam              #+#    #+#             */
/*   Updated: 2022/07/10 15:06:11 by jnam             ###   ########.fr       */
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

void	handler(int signum)
{
	if (signum == SIGUSR2)
		ft_putstr("status : success connect!\n");
}

void	shift(char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & (0x80 >> bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(300);
	}	
}

void	send_message(char *message, int pid)
{
	int	i;

	i = 0;
	while (1)
	{
		shift(message[i], pid);
		if (!message[i])
			break ;
		i++;
	}
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
	signal(SIGUSR2, handler);
	if (pid < 101 || 99999 < pid)
		error_handling(1);
	ft_putstr("[client pid] ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	while (argv[i])
	{
		send_message(argv[i++], pid);
		if (argv[i])
			shift(' ', pid);
	}
	exit(0);
}
