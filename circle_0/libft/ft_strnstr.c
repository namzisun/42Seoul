/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:39:18 by jnam              #+#    #+#             */
/*   Updated: 2022/01/06 17:39:21 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (dest[i] != '\0' && i < size)
    {
        j = 0;
        if (dest[i] == src[j])
        {
            while (src[j] != '\0' && dest[i + j] != '\0')
            {
                if (src[j] != dest[i + j] || (i + j) <= size)
                    break;
                j++;
            }
            if (src[j] == '\0')
                return ((char *)dest[i]);
        }
        i++;
    }
    return ((void *)0);
}
