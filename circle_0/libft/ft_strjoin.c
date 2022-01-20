/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:58:03 by jnam              #+#    #+#             */
/*   Updated: 2022/01/18 16:58:04 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int     i;
    int     j;

    i = 0;
    j = 0;
    str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[j++] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        str[j++] = s2[i];
        i++;
    }
    str[j] = 0;
    return (str);
}
