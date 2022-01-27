/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:56:51 by jnam              #+#    #+#             */
/*   Updated: 2022/01/27 17:19:05 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_abs(int n)
{
	if (n < 0)
		return ((long long)n * -1);
	return (n);
}

static int	ft_len(int n)
{
	int	i;
	size_t	num;

	num = ft_abs(n);
	i = 0;
	if (n < 0)
		i++;
	while (1)
	{
		i++;
		if (num < 10)
			break ;
		num = num / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num;
	int	len;

	num = ft_abs(n);
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = 0;
	while (--len >= 0)
	{
		if (len == 0 && n < 0)
		{
			str[len] = '-';
			break ;
		}
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
