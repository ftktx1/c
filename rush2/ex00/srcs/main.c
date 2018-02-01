/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:20:37 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/28 23:43:22 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	print_answer(int rush, int width, int length)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(length);
	ft_putstr("]");
	return ;
}

void	other_rushes(char *str, int width, int length)
{
	if (width == 1 && length == 1)
	{
		print_answer(2, width, length);
		ft_putstr(" || ");
		print_answer(3, width, length);
		ft_putstr(" || ");
		print_answer(4, width, length);
	}
	else if (str[(((length + 1) * width) - width + 1)] == 'A')
		print_answer(3, width, length);
	else if (width == 1)
	{
		print_answer(2, width, length);
		ft_putstr(" || ");
		print_answer(4, width, length);
	}
	else if (str[width - 1] == 'C')
		print_answer(4, width, length);
	else if (str[width - 1] == 'A')
		print_answer(2, width, length);
	return ;
}

void	rush_reader(char *str, int width, int length)
{
	if (str[0] == 'o')
		print_answer(0, width, length);
	else if (str[0] == '/')
		print_answer(1, width, length);
	else if (str[0] == 'A')
		other_rushes(str, width, length);
	else
		ft_putstr("aucune");
	return ;
}

void	measure_size(char *str, int *length, int *width)
{
	int		index;

	index = 0;
	*length = 0;
	*width = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '\n')
			*length = *length + 1;
		index++;
	}
	index = 0;
	while (str[index] != '\n' && str[index] != '\0')
	{
		*width = *width + 1;
		index++;
	}
	return ;
}

int		main(void)
{
	int		index[2];
	int		length;
	int		width;
	char	*res;
	char	buffer[100];

	index[0] = 0;
	index[1] = 0;
	while ((index[1] = read(0, buffer, 100)))
	{
		buffer[index[1]] = '\0';
		index[0] += index[1];
		res = append_str(res, buffer, index[1], index[0]);
	}
	measure_size(res, &width, &length);
	rush_reader(res, length, width);
	ft_putchar('\n');
	return (0);
}
