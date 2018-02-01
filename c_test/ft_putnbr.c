/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 09:57:36 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/15 10:42:34 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void    ft_putnbr(int nb)
{
	int i;
	if (nb == 0)
	{
		printf("0");
		return ;
	}
	while(nb > 0)
	{
		i = nb % 10; 
		printf("%i", i);
		nb = nb / 10;
	}
}

int main()
{
	ft_putnbr(123456789);
	return(0);
}

