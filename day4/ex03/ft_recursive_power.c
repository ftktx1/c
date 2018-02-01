/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:40:23 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:19:31 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// did not account for negative powers
int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		if (power == 0 && nb != 0)
			return (1);
		else
			return (0);
	}
}
