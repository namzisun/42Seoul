/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:02:11 by jnam              #+#    #+#             */
/*   Updated: 2022/01/20 17:02:12 by jnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *newnode;

    if (!f || !del)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        newnode = ft_lstnew(f(lst->content));
        if (!newnode)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, newnode);
        lst = lst->next;
    }
    newnode = NULL;
    return (new_list);
}
