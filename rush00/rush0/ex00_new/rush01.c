/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 10:45:50 by hnam              #+#    #+#             */
/*   Updated: 2018/01/14 12:26:17 by kshimek          ###   ########.fr       */
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

int		rush01(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	make_line(x, '/', '*', '\\');
	if (y == 2)
	{
		make_line(x, '\\', '*', '/');
	}
	else if (y > 2)
	{
		while (y > 2)
		{
			make_line(x, '*', ' ', '*');
			y--;
		}
		make_line(x, '\\', '*', '/');
	}
	return (0);
}
