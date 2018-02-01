/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:44:29 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/13 18:33:42 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
		index--;
	}
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		return (-1);
}
