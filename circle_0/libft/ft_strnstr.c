/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:11:57 by jnam              #+#    #+#             */
/*   Updated: 2022/01/04 16:47:08 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *dest, const char *src, size_t size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (*src == '\0')
        return (dest);
    while (dest[j] != '\0')
    {
        if (dest[j] != src[i])
            j++;
        else if (dest[j] == src[i])
        {
            while (src[i] != '\0' && i < size)
            {
                i++;
                j++;
            }
        }
    }

}