/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 11:25:54 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/23 18:32:04 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct	s_list t_list;
struct	s_list
{
	void	*data;
	t_list	*next;
};
t_list			*ft_create_elem(void *data);
void			ft_list_push_back(t_list **begin_list, void *data);
#endif
