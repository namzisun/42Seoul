/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:38:18 by jnam              #+#    #+#             */
/*   Updated: 2022/01/23 19:01:41 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)dest;
	i = 0;
	while (i < len)
		tmp[i++] = (unsigned char) value;
	return (tmp);
}
