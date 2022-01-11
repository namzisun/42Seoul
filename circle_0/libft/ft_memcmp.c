/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:55:57 by jnam              #+#    #+#             */
/*   Updated: 2022/01/11 17:55:58 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_memcmp(const void *dest, const void *src, size_t size)
{
    size_t          i;
    unsigned char   *str_d;
    unsigned char   *str_s;

    i = 0;
    str_d = (unsigned char *)dest;
    str_s = (unsigned char *)src;
    while (i < size)
    {
        if (str_d[i] != str_s[i])
            return (str_d[i] = str_s[i]);
        i++;
    }
    return (0);
}
