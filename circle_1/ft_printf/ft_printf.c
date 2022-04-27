/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:58:42 by jnam              #+#    #+#             */
/*   Updated: 2022/04/27 16:26:43 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(const char type, va_list ap)
{
    int	len;

	if (type == 'c')
		len = ft_printf_c(ap);
	else if (type == 's')
		len = ft_printf_s(ap);
	else if (type == 'p')
		len = ft_printf_addr(ap);
	else if (type == 'd' || type == 'i')
		len = ft_printf_di(ap);
	else if (type == 'u')
		len = ft_printf_u(ap);
	else if (type == 'x' || type == 'X')
		len = ft_printf_hex(ap);
	else if (type == '%')
	{
		write(1, '%', 1);
		len = 1;
	}
	else
		return (-1);
    return (len);
}

int	ft_printf(const char *format, ...)
{
    int		len;
	va_list	ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_print_format(*format, ap);
		}
		else
		{
			write(1, format, 1);
			len++;
		}
		format++;
	}
	va_end(ap);
    return (len);
}
