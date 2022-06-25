# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   client.c                                           :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 01:14:01 by jnam              #+#    #+#              #
/*   Updated: 2022/06/26 02:06:56 by jnam             ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include "minitalk.h"

void	error_handling(int error_num)
{
	if (error_num == 0)
		ft_putstr("argc error : please put 3 arguments.\n");
	else if (error_num == 1)
		ft_putstr("pid error : check the server pid.\n");
	exit(1);
}

void	handshake(int status_num)
{
	if (status_num == 0)
		ft_putstr("status : connect!\n");
	else if (status_num == 1)
		ft_putstr("status : sent message\n");
}

void	shift(char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & 0x80)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
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

	if (argc != 3)
		error_handling(0);
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		error_handling(1);
	handshake(0);
	send_message(av[2], pid);
	usleep(100);
	handshake(1);
	exit(0);
}
