/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:55:10 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:24:28 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// did not include prototype of ftputchar
void	ft_is_negative(int n)
{
	char	test;

	if (n >= 0)
	{
		test = 'P';
	}
	else
	{
		test = 'N';
	}
	ft_putchar(test);
}
