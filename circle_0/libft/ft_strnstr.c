/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:39:18 by jnam              #+#    #+#             */
/*   Updated: 2022/01/26 00:38:06 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;

	if (!*to_find)
		return ((char *)str);
	while (*str != '\0' && size-- > 0)
	{
		i = 0;
		while (*(str + i) == *(to_find + i) && i < size)
		{
			i++;
			if (!*(to_find + i))
				return ((char *)str);
		}
		str++;
	}
	return (0);
}
