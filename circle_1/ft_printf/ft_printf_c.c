/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:04:28 by jnam              #+#    #+#             */
/*   Updated: 2022/04/27 20:23:50 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(va_list ap)
{
	unsigned char	c;
	int				len;

	c = (unsigned char)va_arg(ap, int);
	len = write(1, &c, 1);
	return (len);
}
