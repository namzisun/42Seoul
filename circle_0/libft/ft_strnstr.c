/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:39:18 by jnam              #+#    #+#             */
/*   Updated: 2022/01/26 21:02:09 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;

	if (!to_find[0])
		return ((char *)str);
	j = 0;
	while (str[j] && j < size)
	{
		i = 0;
		if (str[j + i] == to_find[i])
		{
			while (str[j + i] && to_find[i] && (i + j) < size)
			{
				if (str[j + i] != to_find[i])
					break ;
				i++;
			}
		}
		if (!to_find[i])
			return (&((char *)str)[j]);
		j++;
	}
	return (NULL);
}
