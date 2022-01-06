/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:59:22 by jnam              #+#    #+#             */
/*   Updated: 2022/01/06 17:08:29 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strdup(const char *s)
{
    char    *copy;
    int     len;
    int     i;

    i = 0;
    len = strlen(s);
    copy = (char *)malloc(sizeof(char) * (len + 1));
    while (s[i] != '\0')
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}