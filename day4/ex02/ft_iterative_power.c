/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 10:31:14 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:18:55 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// did not account for negative powers
int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	while (power > 1)
	{
		x = x * nb;
		power = power - 1;
	}
	return (x);
}
