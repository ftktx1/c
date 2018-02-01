/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftputstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:02:33 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/24 14:04:09 by kshimek          ###   ########.fr       */
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
