/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:56:07 by jnam              #+#    #+#             */
/*   Updated: 2022/01/23 18:59:33 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char		*str_d;
	const char	*str_s;
	int			i;

	i = 0;
	str_d = dest;
	str_s = src;
	while (i < size)
	{
		*str_d++ = *str_s++;
		i++;
	}
	return (dest);
}
