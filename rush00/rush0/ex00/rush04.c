/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:16:53 by hnam              #+#    #+#             */
/*   Updated: 2018/01/13 16:16:55 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	printing(int a, char c)
{
	a = a - 2;
	while (a > 0)
	{
		ft_putchar(c);
		a--;
	}
}

void	first_line(x)
{
	ft_putchar('A');
		if(x != 1)
		{
			if (x != 2)
			{
				printing(x, 'B');

			}
			ft_putchar('C');
		}
		ft_putchar('\n');
}

void	last_line(int x, int y)
{
	ft_putchar('C');
	if(y != 1)
	{
		if (y != 2)
		{
			printing(x, 'B');
		}
		ft_putchar('A');
	}
}

void	middle_line(int x, int y)
{
	int count;
	int line;

	count = y;
	line = y - 2;
	while (line > 0)
	{
		ft_putchar('B');
		while (count > 2)
		{
			count = count - 2*count;
			printing(x, ' ');
			count--;
		}
		count = y;
		ft_putchar('B');
		ft_putchar('\n');
		line--;
	}
}

int		rush04(int x, int y)
{
	if ( x <= 0 || y <= 0)
	{
		return (0);
	}
	else
	{
		first_line(x);
		if(y > 2)
		{
			middle_line(x, y);
		}
		last_line(x, y);
	}
	return (0);
}
