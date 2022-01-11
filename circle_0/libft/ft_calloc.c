/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:33:18 by jnam              #+#    #+#             */
/*   Updated: 2022/01/06 17:33:22 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *str;
    int     i;

    i = 0;
    str = malloc((count) * size);
    while (i < (count * size))
    {
        *(str + i) = 0;
        i++;
    }
    return (str);
}
