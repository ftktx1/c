/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:08:59 by hnam              #+#    #+#             */
/*   Updated: 2018/01/13 16:09:03 by hnam             ###   ########.fr       */
=======
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:36:18 by mjacques          #+#    #+#             */
/*   Updated: 2018/01/13 15:36:23 by mjacques         ###   ########.fr       */
>>>>>>> d0f4d214245a351ca0f22eb55373c1098b31e1cd
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
	ft_putchar('o');
		if(x != 1)
		{
			if (x != 2)
			{
				printing(x, '-');

			}
			ft_putchar('o');
		}
		ft_putchar('\n');
}

void	last_line(int x, int y)
{
	ft_putchar('o');
	if(y != 1)
	{
		if (y != 2)
		{
			printing(x, '-');
		}
		ft_putchar('0');
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
		ft_putchar('|');
		while (count > 2)
		{
			count = count - 2*count;
			printing(x, ' ');
			count--;
		}
		count = y;
		ft_putchar('|');
		ft_putchar('\n');
		line--;
	}
}

int		rush00(int x, int y)
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
