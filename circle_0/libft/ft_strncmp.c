/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:39:10 by jnam              #+#    #+#             */
/*   Updated: 2022/01/23 18:33:17 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && i + 1 < size)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
