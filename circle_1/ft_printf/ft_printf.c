/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:58:42 by jnam              #+#    #+#             */
/*   Updated: 2022/04/27 20:39:41 by jnam             ###   ########.fr       */
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
	{
		len = write(1, "0x", 2);
		len += ft_printf_hex((unsigned long long)(va_arg(ap, void *)), 0, 0);
	}
	else if (type == 'd' || type == 'i')
		len = ft_printf_di(ap);
	else if (type == 'u')
		len = ft_printf_hex((unsigned int)(va_arg(ap, int), 1, 0);
	else if (type == 'x')
		len = ft_printf_hex((unsigned int)(va_arg(ap, int), 0, 0);
	else if (type = 'X')
		len = ft_printf_hex((unsigned int)(va_arg(ap, int), 0, 1);
	else if (type == '%')
		len = write(1, '%', 1);
	else
		return (-1);
    return (len);
}

int	ft_printf(const char *format, ...)
{
    int		len;
	va_list	ap;

	len = 0;
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
