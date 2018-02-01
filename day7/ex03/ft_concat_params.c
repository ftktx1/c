/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:09:39 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/18 14:39:51 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*stringcat(char *dest, char *src)
{
	int	src_i;
	int	dest_i;

	src_i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*string;
	int		x;
	int		y;
	int		z;

	z = 0;
	y = 0;
	while (z < argc)
	{
		x = 0;
		while (argv[y])
		{
			y++;
			z++;
		}
	}
	string = (char *)malloc(sizeof(*string) * (z + 1));
	while (x < argc - 1)
	{
		x++;
		string = stringcat(string, argv[x]);
	}
	return (string);
}
