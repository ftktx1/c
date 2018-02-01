/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:05:06 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/17 17:01:16 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pntr;
	int	index;

	if (min >= max)
	{
		return ((void *)0);
	}
	pntr = (int*)malloc(sizeof(*pntr) * (max - min));
	index = 0;
	while (min < max)
	{
		pntr[index] = min;
		min++;
		index++;
	}
	return (pntr);
}
