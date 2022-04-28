/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:48:55 by jnam              #+#    #+#             */
/*   Updated: 2022/04/28 14:04:06 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const str *format, ...);
int	ft_printf_char(unsigned char c);
int	ft_printf_str(unsigned char *str);
int	ft_printf_nbr(int num);
int	ft_printf_ui(unsigned int num);
int	ft_printf_hex(unsigned long long num, int upper);
#endif
