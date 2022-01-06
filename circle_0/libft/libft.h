/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:13:46 by jnam              #+#    #+#             */
/*   Updated: 2022/01/06 17:10:53 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_strlen(const char *s);
int     ft_strncmp(const char *str1, const char *str2, size_t size);
char    *ft_strnstr(const char *dest, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *strrchr(const char *s, int c);
char    *strdup(const char *s);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t  *ft_strlcpy(char *dest, const char *src, size_t size);


#endif