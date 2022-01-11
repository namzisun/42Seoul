/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:38:44 by jnam              #+#    #+#             */
/*   Updated: 2022/01/06 17:38:46 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    int     i;
    int     j;
    size_t  dest_len;
    size_t  str_len;

    dest_len = ft_strlen(dest);
    str_len = ft_strlen(src);
    i = 0;
    j = dest_len;
    while (src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    if (size < dest_len)
        return (str_len + size);
    else
        return (str_len + dest_len);
}
