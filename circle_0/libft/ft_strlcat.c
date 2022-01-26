/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:38:44 by jnam              #+#    #+#             */
/*   Updated: 2022/01/26 18:36:35 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i_d;
	size_t	i_s;
	size_t	len_d;
	size_t	len_s;

	i_d = ft_strlen(dest);
	i_s = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (len_s + size);
	while (src[i_s] && i_d < size - 1)
	{
		dest[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	dest[i_d] = '\0';
	return (len_d + len_s);
}
