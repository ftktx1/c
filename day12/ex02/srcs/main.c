/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:37:00 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/25 19:30:30 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int		err(int errnum)
{
	if (errnum == 1)
		ft_putstr("Incorrect inputs.\n", 2);
	if (errnum == 2)
		ft_putstr("File open error.", 2);
	if (errnum == 3)
		ft_putstr("File close error.", 2);
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 2;
	if (argc < 2 || argv[1][0] != '-' || argv[1][1] != 'c')
		return (err(1));
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			return (err(2));
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ret = ft_tail(buf, argv[2]);
		ft_putstr(&buf[ret], 1);
		if (close(fd) == -1)
			return (err(3));
	}
	return (0);
}
