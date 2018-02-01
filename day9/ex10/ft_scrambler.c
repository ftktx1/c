/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 14:09:55 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/19 14:14:36 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int *holder1;
	int *holder2;
	int *holder3;

	holder1 = &c;
	holder2 = &d;
	holder3 = &b;
	c = a;
	d = c;
	b = holder2;
	a = holder3;
	return ;
}
