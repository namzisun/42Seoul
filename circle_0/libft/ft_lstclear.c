/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:01:17 by jnam              #+#    #+#             */
/*   Updated: 2022/01/20 17:01:20 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *cur;

    if (!lst || !*lst || !del)
        return ;
    while (*lst)
    {
        cur = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = cur;
    }
    *lst = NULL;
}
