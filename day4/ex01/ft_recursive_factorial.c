/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 09:36:19 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:21:02 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// does not account for int overflow for factorials with input of 14 or over
// //still pass tho
int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		if (nb < 0)
			return (0);
		else
			return (1);
	}
}
