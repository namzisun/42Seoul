/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:54:33 by jnam              #+#    #+#             */
/*   Updated: 2022/03/25 15:56:01 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <unistd.h>

char	*ft_read(int fd, char *str)
{
	char	*buf;
	int		r_bytes;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (!ft_strchr(str, '\n'))
	{
		r_bytes = read(fd, buf, BUFFER_SIZE);
		if (r_bytes == 0)
			break ;
		if (r_bytes == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[r_bytes] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*ft_set_line(char *str)
{
	char	*line;
	int		i;
	int		j;

	if (!str[0])
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	j = 0;
	while (j < i)
	{
		line[j] = str[j];
		j++;
	}
	if (str[j] == '\n')
		line[j++] = '\n';
	line[j] = '\0';
	return (line);
}

char	*ft_set_str(char *str)
{
	char	*update;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	update = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!update)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		update[j++] = str[i++];
	update[j] = '\0';
	free(str);
	return (update);
}

char	*get_next_line(int fd)
{
	static char	*str[256];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || fd > 255)
		return (NULL);
	str[fd] = ft_read(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	line = ft_set_line(str[fd]);
	str[fd] = ft_set_str(str[fd]);
	return (line);
}
