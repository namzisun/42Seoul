/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:52:05 by jnam              #+#    #+#             */
/*   Updated: 2022/04/27 20:48:13 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long long num, int ui, int upper)
{
	int					len;
	int					base_num;
	int					i;
	static const char	*base[16] = "0123456789abcdef";
	char				base[16];

	len = 0;
	base_num = 16;
	if (ui == 1)
		base_num = 10;
	i = 0;
	while (num > 0)
	{
		base[i++] = num % base_num;
		num = num / base_num;
	}
	i--;
	while ( i >= 0)
	{
		len += write(1, &base[i--], 1);
	}
	return (len);
}
