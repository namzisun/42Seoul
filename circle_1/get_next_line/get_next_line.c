/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:22:54 by jnam              #+#    #+#             */
/*   Updated: 2022/03/18 17:16:51 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *str)
{
	char	*buf;
	int	r_bytes;
	
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	r_bytes = 1;
	while (!ft_strchr(str, '\n'))
	{
		r_bytes = read(fd, buf, BUFFER_SIZE);
		if (r_bytes == 0)
			break;
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
	int	i;
	int	j;

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
	int	i;
	int	j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (NULL);
	update = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!update)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		update[j++] = str[i++];
	update[j] = '\0';
	return (update);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;
	
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	str = ft_read(fd, str);
	if (!str)
		return (NULL);
	line = ft_set_line(str);
	str = ft_set_str(str);
	return (line);
}
