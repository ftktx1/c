/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 17:51:49 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 18:27:12 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	printing(int a, char c)
{
	if (a > 2)
	{
		ft_putchar(c);
		printing(a - 1, c);
	}
}

void	make_line(int number, char first, char middle, char last)
{
	ft_putchar(first);
	if (number != 1)
	{
		if (number != 2)
		{
			printing(number, middle);
		}
		ft_putchar(last);
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	make_line(x, 'A', 'B', 'C');
	if (y == 2)
	{
		make_line(x, 'A', 'B', 'C');
	}
	else if (y > 2)
	{
		while (y > 2)
		{
			make_line(x, 'B', ' ', 'B');
			y--;
		}
		make_line(x, 'A', 'B', 'C');
	}
	return (0);
}
