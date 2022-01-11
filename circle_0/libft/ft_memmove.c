/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:56:17 by jnam              #+#    #+#             */
/*   Updated: 2022/01/11 17:56:18 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 중간에 버퍼를 거쳐서 복사를 하므로 안정성이 memcpy보다 뛰어남
void    *ft_memmove(void *dest, const void *src, size_t size)
{
    unsigned char   *str_d;
    unsigned char   *str_s;

    str_d = (unsigned char *)dest;
    str_s = (unsigned char *)src;
    if (dest == src || size == 0)
        return (dest);
    else if (dest < src)
    {
        while (size--)
            *str_d++ = *str_s++;
    }
    else
    {
        str_d += size;
        str_s += size;
        while (size--)
            *--str_d = *--str_s;
    }
    return (dest);
}
