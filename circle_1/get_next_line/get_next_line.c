/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:22:54 by jnam              #+#    #+#             */
/*   Updated: 2022/03/13 16:05:01 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *str)
{
	char	*buf;
	int	read_bytes;
	while ()
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		strjoin(str, buf);
	}
	free(buf);
	return (str)
}

char	*ft_set_line(char *str)
{	char	*line;
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\n')
		i++;
	j = 0;
	while (j < i)
	{
		line[j] = str[j];
		j++;
	}
	if (str[j] == '\n')
		line[j] = '\n'
	return (line);
}

char	*ft_set_str(char *str)
{
	char	*update;
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	j = 0;
	while (!str)
		update[j++] = str[i++];
	return (update);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;
	
	str = ft_read(fd, str);
	line = ft_set_line(str);
	str = ft_set_str(str);
	return (line);
}
