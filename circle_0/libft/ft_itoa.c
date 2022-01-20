/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:56:51 by jnam              #+#    #+#             */
/*   Updated: 2022/01/18 16:56:53 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

static int ft_len(int n)
{
    int     i;
    long    num;

    num = ft_abs(n);
    i = 0;
    if (n < 0)
        i++;
    while (1)
    {
        if (num < 10)
            break;
        num = num / 10;
        i++;
    }
    return (i + 1);
}

static int  ft_decimal(long n)
{
    while (n > 10)
    {
        n = n / 10;
    }
    return (n);
}

char    *ft_itoa(int n)
{
    char    *str;
    long    num;
    int     i;

    i = 0;
    num = ft_abs(n);
    str = (char*)malloc(sizeof(char) * (ft_len(n) + 1));
    if(!str)
        return (NULL);
    if (n < 0)
        str[i++] = '-';
    while (i < ft_len(n))
    {
        str[i] = ft_decimal(num) + 48;
        num = num % 10;
        i++;
    }
    str[i] = 0;
    return (str);
}
