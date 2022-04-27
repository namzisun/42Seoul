/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:08:57 by jnam              #+#    #+#             */
/*   Updated: 2022/04/27 20:25:20 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(va_list ap)
{
	int				len;
	unsigned char*	str;

	str = (unsigned char*)va_arg(ap, char*);
	if (!str)
		return (ft_printf_s("(null)");
	len = write(1, str, ft_strlen(str));
	return (len);
}
