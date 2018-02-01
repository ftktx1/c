/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:56:04 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:24:48 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//did not include prototype of ft_putchar
void	ft_print_comb(void)
{
	int		num;

	num = 0;
	while (num <= 800)
	{
		if ((num / 100) < ((num / 10) % 10) && ((num / 10) % 10) < (num % 10))
		{
			ft_putchar((num / 100) + '0');
			ft_putchar(((num / 10) % 10) + '0');
			ft_putchar((num % 10) + '0');
			if (num == 789)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
		}
		num = num + 1;
	}
}
