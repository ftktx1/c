/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:27:40 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/18 14:38:06 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*pntr;

	index = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	pntr = (int *)malloc(sizeof(*pntr) * (max - min));
	while (min < max)
	{
		pntr[index] = min;
		min++;
		index++;
	}
	*range = pntr;
	return (index);
}
