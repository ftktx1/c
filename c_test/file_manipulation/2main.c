/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:12:28 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/24 11:18:28 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

/*
int open (chr *filename, int access, int permission)
{
}*/

int main(void)
{
	int fd;

	fd = open("42.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	printf("%i", fd);
	return (0);
}
