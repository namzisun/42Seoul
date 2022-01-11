/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:38:18 by jnam              #+#    #+#             */
/*   Updated: 2022/01/06 17:38:20 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로(바이트 딘위) 지정
void    *ft_memset(void *dest, int value, size_t len)
{
    size_t          i;
    unsigned char   *tmp;

    tmp = (unsigned char *)dest;
    i = 0;
    while (i < len)
        tmp[i++] = (unsigned char) value;
    return (tmp);
}
