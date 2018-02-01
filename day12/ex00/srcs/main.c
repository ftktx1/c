/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:37:00 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/25 12:00:25 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int		main(int argv, char **argc)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argv < 2)
	{
		ft_putstr("File name missing.", 2);
		return (1);
	}
	if (argv > 2)
	{
		ft_putstr("Too many arguments.", 2);
		return (1);
	}
	fd = open(argc[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("File open error.", 2);
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf, 1);
	close(fd);
	return (0);
}
