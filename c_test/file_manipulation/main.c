/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:12:28 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/24 11:37:50 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

/*
int open (chr *filename, int access, int permission)
{
}*/

int main(int argc, char **argv)
{
	int fd;

	if ( argc != 2 )
	{
		printf("No input");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	printf("%i", fd);
	return (0);
}
