/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:56:07 by jnam              #+#    #+#             */
/*   Updated: 2022/01/11 17:56:08 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strcpy 와의 차이점
// 문자열은 null을 만나면 문자열이 끝났다고 인식
// 메모리는 그렇지 않으므로 몇개 복사할건지 size를 명시적으로 줘야함
void    *ft_memcpy(void *dest, const void *src, size_t size)
{
    char        *str_d;
    const char  *str_s;
    int         i;

    i = 0;
    str_d = dest;
    str_s = src;
    while(i < size)
    {
        *str_d++ = *str_s++;
        i++;
    }
    return (dest);
}
