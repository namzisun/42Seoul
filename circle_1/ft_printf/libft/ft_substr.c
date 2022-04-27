/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:58:33 by jnam              #+#    #+#             */
/*   Updated: 2022/02/01 18:25:22 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nullstr(void)
{
	char	*sub;

	sub = (char *)malloc(sizeof(char) * 1);
	if (!sub)
		return (0);
	sub[0] = 0;
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
	{
		sub = ft_nullstr();
		return (sub);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
