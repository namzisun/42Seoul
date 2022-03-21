/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:24:17 by jnam              #+#    #+#             */
/*   Updated: 2022/03/21 20:49:21 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *str);
char	*ft_set_line(char *str);
char	*ft_set_str(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *S, int c);
size_t	ft_strlen(const char *s);


#endif
