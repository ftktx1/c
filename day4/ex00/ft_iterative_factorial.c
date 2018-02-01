/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:21:43 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:20:31 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// need to clean this up; also does not account for factorials with input of 14 or over bc of int overflow
//
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	y;

	y = nb;
	if (nb == 0)
	{
		nb = 1;
	}
	if (nb < 0)
	{
		nb = 0;
	}
	else
	{
		while (y > 2)
		{
			y = y - 1;
			nb = nb * y;
		}
	}
	return (nb);
}

int main()
{
	int i = 14;
	i = ft_iterative_factorial(i);
	printf("%i", i);
	return(0);
}
