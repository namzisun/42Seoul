/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:57:25 by jnam              #+#    #+#             */
/*   Updated: 2022/01/18 16:57:26 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    num;

    num = n;
    if (num < 0)
    {
        write(fd, "-", 1);
        num *= -1;
    }
    if (num >= 10)
    {
        ft_putnbr_ft(num / 10, fd);
        ft_putnbr_fd(num % 10, fd);
    }
    else if (num < 10)
        ft_putnbr_ft(num + '0', fd);
}
