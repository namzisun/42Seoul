/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:33:04 by jnam              #+#    #+#             */
/*   Updated: 2022/01/23 19:05:22 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	if (str[i++] == '-')
		sign = -1;
	else if (str[i] == '+')
		i++;
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
