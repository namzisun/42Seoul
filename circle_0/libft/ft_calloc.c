/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:59:12 by jnam              #+#    #+#             */
/*   Updated: 2022/01/06 17:23:32 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(size_t count, size_t size)
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