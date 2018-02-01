/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:06:54 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/23 21:26:45 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);
{
	t_list	*tmp;
	
	tmp = (t_list *)malloc(sizeof(*begin_list));
	while (tmp->next != NULL)
		tmp = tmp->next;
	*begin_list = ft_create_elem(data);
	return ;
}
