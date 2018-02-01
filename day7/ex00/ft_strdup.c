/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:31:27 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/17 17:11:23 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	char 	*pntr;
	int		length;

	length = 0;
	while (src[length])
		length++;
	dest = (char*)malloc(sizeof(*src) * (length + 1));
	length = 0;
	while (src[length])
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	pntr = dest;
	return (pntr);
}
