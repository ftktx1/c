/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 22:14:01 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/18 22:15:36 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'k' && str[i] <= 'z')
			str[i] = str[i] - 10;
		if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] = str[i] - 10;
		if (str[i] >= 'a' && str[i] <= 'j')
			str[i] = str[i] + 16;
		if (str[i] >= 'A' && str[i] <= 'J')
			str[i] = str[i] + 16;
		i++;
	}
	return (str);
}
