/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:31:36 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/19 16:51:26 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	str_i;
	int negative;
	int num;

	str_i = 0;
	negative = 1;
	num = 0;
	while (str[str_i] == ' ' || (str[str_i] > 8 && str[str_i] < 14))
		str_i++;
	if (str[str_i] == '-' || str[str_i] == '+')
	{
		if (str[str_i] == '-')
			negative = -1;
		str_i++;
	}
	while (str[str_i] == '0')
		str_i++;
	while (str[str_i] <= '9' && str[str_i] >= '0')
	{
		num = (num * 10) + (str[str_i] - 48);
		str_i++;
	}
	return (num * negative);
}

int main (void)
{
	printf("%i", ft_atoi("                    +1234567"));
	return(0);

}
