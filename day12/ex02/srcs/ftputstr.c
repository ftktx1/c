/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftputstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:02:33 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/25 19:42:36 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int where_to_print)
{
	write(where_to_print, &c, 1);
	return ;
}

void	ft_putstr(char *str, int where_to_print)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x], where_to_print);
		x++;
	}
	return ;
}

int		ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

int		ft_atoi(char *str)
{
	int	str_i;
	int ret_i;

	str_i = 0;
	ret_i = 0;
	while (str[str_i] != '\0' && (str[str_i] <= '9' && str[str_i] >= '0'))
	{
		ret_i = (ret_i * 10) + (str[str_i] - 48);
		str_i++;
	}
	return (ret_i);
}

int		ft_tail(char *buf, char *arg)
{
	int	strlen;
	int	j;

	j = ft_atoi(arg);
	strlen = ft_strlen(buf);
	j = strlen - j;
	while (strlen > 0 && strlen >= j)
		strlen--;
	return (strlen);
}
