/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:26:49 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/16 19:09:58 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (3);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (alphanum(str[i]) == 3)
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (alphanum(str[i]) == 0 && alphanum(str[i + 1]) == 3)
		{
			i++;
			str[i] = str[i] - 32;
		}
		while (alphanum(str[i]) != 0 && alphanum(str[i + 1]) == 2)
		{
			i++;
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
