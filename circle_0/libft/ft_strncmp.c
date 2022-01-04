/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:11:46 by jnam              #+#    #+#             */
/*   Updated: 2022/01/04 16:16:02 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t size)
{
    int i;

    i = 0;
    while(str1[i] == str2[i] && i + 1 < size) {
        i++;
    }
    return (str1[i] - str2[i]);
}