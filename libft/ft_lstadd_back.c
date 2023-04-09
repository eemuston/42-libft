/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:01:40 by eemelimusto       #+#    #+#             */
/*   Updated: 2023/01/13 14:59:30 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *temp;

    temp = *lst;
    if(temp != (void *)0)
    {   
        while (temp->next != (void *)0)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
    else
        *lst = new;
}