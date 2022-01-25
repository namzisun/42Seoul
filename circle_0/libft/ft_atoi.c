/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:33:04 by jnam              #+#    #+#             */
/*   Updated: 2022/01/26 00:48:07 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

static long	ft_sign(const char *str, size_t *i)
{
	long	sign;
	size_t	j;

	j = *i;
	sign = 1;
	if (str[j] == '-')
	{
		sign = -1;
		j++;
	}
	else if (str[j] == '+')
		j++;
	*i = j;
	return (sign);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	sign;
	long	num;

	i = 0;
	num = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	sign = ft_sign(str, &i);
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		num *= 10;
		num += (str[i] - '0');
		if (num > 2147483647 && sign == 1)
			return (-1);
		if (num > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (num * sign);
}
