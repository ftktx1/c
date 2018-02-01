/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:31:36 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/16 15:01:15 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	str_i;
	int	int_i;
	int return_array[2];

	str_i = 0;
	int_i = 1;
	return_array[0] = 1;
	return_array[1] = 0;
	while (str[str_i] == ' ' || (str[str_i] > 8 && str[str_i] < 14))
		str_i++;
	if (str[str_i] == '-' || str[str_i] == '+')
	{
		if (str[str_i] == '-')
			return_array[0] = -1;
		str_i++;
	}
	while (str[str_i] == '0')
		str_i++;
	while (str[str_i] != '\0' && (str[str_i] <= '9' && str[str_i] >= '0'))
	{
		return_array[1] = (return_array[1] * 10) + (str[str_i] - 48);
		str_i++;
		int_i++;
	}
	return (return_array[1] * return_array[0]);
}
