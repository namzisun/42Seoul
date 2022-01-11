/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:55:04 by jnam              #+#    #+#             */
/*   Updated: 2022/01/11 17:55:07 by jnam             ###   ########.fr       */
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
char    *ft_strrchr(const char *s, int c);
char    *ft_strdup(const char *s);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t  *ft_strlcpy(char *dest, const char *src, size_t size);
void    *ft_bzero(void *dest, size_t len);
void    *ft_calloc(size_t count, size_t size);
void    *ft_memchr(const void *ptr, int value, size_t size);
void    *ft_memcpy(void *dest, const void *src, size_t size);
void    *ft_memmove(void *dest, const void *src, size_t size);
void    *ft_memset(void *dest, int value, size_t len);
int     *ft_memcmp(const void *dest, const void *src, size_t size);




#endif
