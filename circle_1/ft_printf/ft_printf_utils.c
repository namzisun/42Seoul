/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:40:02 by jnam              #+#    #+#             */
/*   Updated: 2022/04/28 15:56:43 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(unsigned char c)
{
	int		len;

	len = write(1, &c, 1);
	return (len);
}

int	ft_printf_str(char *str)
{
	int		len;

	if (!str)
	{
		len = write(1, "(null)", 6);
		return (len);
	}
	len = write(1, str, ft_strlen(str));
	return (len);
}

int	ft_printf_nbr(int num)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	if (!str)
		return (INT_MIN);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}

int	ft_printf_ui(unsigned int num)
{
	int	len;

	if (num > 9)
	{
		len = ft_printf_nbr(num / 10);
		len += ft_printf_char(num % 10 + '0');
	}
	else
		len = ft_printf_char(num + '0');
	return (len);
}

int	ft_printf_hex(unsigned long long num, int upper)
{
	int			len;
	static char	*lower_base = "0123456789abcdef";
	static char	*upper_base = "0123456789ABCDEF";

	len = 0;
	if (num < 16)
	{
		if (upper)
			len += ft_printf_char(upper_base[num]);
		else
			len += ft_printf_char(lower_base[num]);
	}
	else
	{
		len += ft_printf_hex(num / 16, upper);
		len += ft_printf_hex(num % 16, upper);
	}	
	return (len);
}
