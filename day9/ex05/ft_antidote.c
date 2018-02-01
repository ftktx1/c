/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 22:48:59 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/18 22:59:08 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int a, int b)
{
	int	swap;

	swap = a;
	a = b;
	b = swap;
}

int		ft_antidote(int i, int j, int k)
{
	if (i < j)
		ft_swap(i, j);
	if (j < k)
		ft_swap(j, k);
	if (i < j)
		ft_swap(i, j);
	if (j < k)
		ft_swap(j, k);
	return (j);
}
