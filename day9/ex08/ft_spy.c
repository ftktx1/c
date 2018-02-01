/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 14:04:45 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/19 14:04:47 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "president";
	str2 = "attack";
	str3 = "Bauer";
	i = 0;
	while (i < argc)
	{
		if ((ft_strcmp(str1, argv[i]) == 0) || (ft_strcmp(str2, argv[i]) == 0))
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		else if (ft_strcmp(str3, argv[i]) == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		i++;
	}
	return (0);
}
