/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:26:21 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/16 21:26:27 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	dest_x;
	int	tofind_x;

	dest_x = 0;
	tofind_x = 0;
	while (str[dest_x] != '\0')
	{
		while (str[dest_x] == to_find[tofind_x])
		{
			tofind_x++;
			dest_x++;
		}
		if (to_find[tofind_x] == '\0')
			return (&str[dest_x - tofind_x]);
		tofind_x = 0;
		dest_x++;
	}
	return ((void *)0);
}
