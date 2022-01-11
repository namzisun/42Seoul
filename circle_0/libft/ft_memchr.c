/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:49:17 by jnam              #+#    #+#             */
/*   Updated: 2022/01/11 16:49:20 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ptr의 size 중에서 value와 같은 부분 있으면 처음 발견된 위치의 포인터 반환
void    *ft_memchr(const void *ptr, int value, size_t size)
{
    size_t  i;

    i = 0;
    while (i < size)
    {
        if(((unsigned char *)ptr)[i] == (unsigned char)value)
            return ((void *)ptr + i);
        i++;
    }
    return ((void *)0);
}
