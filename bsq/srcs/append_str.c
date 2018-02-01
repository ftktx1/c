/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 23:17:16 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/29 21:06:12 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>

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

char	*read_from_stdin(void)
{
	int		i;
	int		j;
	char	*result;
	char	buffer[500];

	i = 0;
	j = 0;
	while((i = read(0, buffer, 500)))
	{
		buffer[i] = '\0';
		j += i;
		result = append_str(result, buffer, i, j);
	}
	return (result);
}
