/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 12:50:03 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/31 21:14:29 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "append_str.c"

char *read_from_stdin(void);

//exit, open, close, write, read, malloc and free
//read first line to determine number of lines and obstacle and empty chars
//use ft_atoi to convert number to int

//main should read from a file passed as argument; must handle any number of files as input

//if no files passed as argument, then program should read from stdin
//if map is invalid, program should display "map error" on stderr
//answer should be written to the stdout using write()
int	main (int argc, char **argv)
{
	if (argc < 1)
		//read from stdin
		read_from_stdin();
	//else
		//read from each argv
	return (0);
}
