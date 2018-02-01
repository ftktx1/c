/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 23:17:16 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/28 23:39:59 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*append_str(char *str, char *a_str, int a_len, int str_len)
{
	char	*res;
	int		i;
	int		j;

	res = (char *)malloc(sizeof(char) * str_len);
	j = 0;
	i = 0;
	while (j < (str_len - a_len))
	{
		res[j] = str[j];
		j++;
	}
	while (i < a_len)
	{
		res[j] = a_str[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
