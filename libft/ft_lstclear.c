/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemelimustonen <eemelimustonen@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 05:19:49 by eemelimusto       #+#    #+#             */
/*   Updated: 2023/01/14 05:31:29 by eemelimusto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *temp;

    if (lst)
	{
	    while (*lst != NULL)
	    {
		    temp = (*lst)->next;
		    ft_lstdelone(*lst, del);
		    *lst = temp;
	    }
	}
}