/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:39:11 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/18 19:39:14 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	char	hour_m;
	char	next_hour_m;
	int		next_hour;

	next_hour = hour + 1;
	hour_m = 'A';
	next_hour_m = 'A';
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (next_hour == 25)
		next_hour = 1;
	if (hour >= 12 && hour != 24)
		hour_m = 'P';
	if (hour > 12)
		hour = hour - 12;
	if (next_hour >= 12 && next_hour != 24)
		next_hour_m = 'P';
	if (next_hour > 12)
		next_hour = next_hour - 12;
	if (hour == 0)
		hour = 12;
	if (next_hour == 0)
		hour = 12;
	printf("%i %c.M. AND %i %c.M.\n", hour, hour_m, next_hour, next_hour_m);
}
