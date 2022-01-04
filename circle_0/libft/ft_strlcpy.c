/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:11:10 by jnam              #+#    #+#             */
/*   Updated: 2022/01/04 16:04:59 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t *ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  src_len;
    int     i;

    i = 0;
    src_len = ft_strlen(src);
    if (*dest == '\0' || *src == '\0')
        return (0);
    while (i < src_len && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = '\0';
    return (src_len);
}