/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:58:25 by jnam              #+#    #+#             */
/*   Updated: 2022/01/18 16:58:26 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_index(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     first;
    int     last;
    int     i;

    first = 0;
    last = ft_strlen(s1);
    while (s1[first] && ft_index(s1[first], set))
        first++;
    while (first < last && ft_index(s1[last - 1], set))
        last--;
    str = (char *)malloc(sizeof(*s1) * (last - first + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (first < last)
        str[i++] = s1[first++];
    str[i] = 0;
    return (str);
}
