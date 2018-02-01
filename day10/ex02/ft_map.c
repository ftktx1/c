/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 09:40:29 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/23 15:34:09 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ret_array;

	i = 0;
	ret_array = (int *)malloc(sizeof(int) * length);
	while (i <= length)
	{
		ret_array[i] = (*f)(tab[i]);
		i++;
	}
	return (ret_array);
}
