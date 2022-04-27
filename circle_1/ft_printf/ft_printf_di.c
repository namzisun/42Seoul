/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:12:34 by jnam              #+#    #+#             */
/*   Updated: 2022/04/27 20:24:31 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_di(va_list ap)
{
	int		len;
	char	*str;

	str = ft_itoa((int)va_arg(ap, int));
	if (!str)
		return (INT_MIN);
	len = write(1, str, ft_strlen(str));
	return (len);
}
