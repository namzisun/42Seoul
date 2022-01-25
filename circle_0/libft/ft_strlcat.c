/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:38:44 by jnam              #+#    #+#             */
/*   Updated: 2022/01/25 23:35:48 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i_d;
	size_t	i_s;
	size_t	res_d;
	size_t	res_s;

	i_d = ft_strlen(dest);
	i_s = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[i_s] && i_d < size - 1)
	{
		dest[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	dest[i_d] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
