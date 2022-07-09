/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:58:37 by jnam              #+#    #+#             */
/*   Updated: 2022/07/06 16:58:52 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i_d;
	size_t	i_s;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	i_d = len_d;
	i_s = 0;
	if (size <= len_d)
		return (len_s + size);
	while (src[i_s] && i_d < size - 1)
		dest[i_d++] = src[i_s++];
	dest[i_d] = '\0';
	return (len_d + len_s);
}
