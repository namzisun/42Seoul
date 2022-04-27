/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:52:05 by jnam              #+#    #+#             */
/*   Updated: 2022/04/27 20:39:37 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long long num, int ui, int upper)
{
	int					len;
	int					base_num;
	static const char	*base[16] = "0123456789abcdef";

	base_num = 16;
	if (ui == 1)
		base_num = 10;
	while ()
	{

	}
	return (len);
}
