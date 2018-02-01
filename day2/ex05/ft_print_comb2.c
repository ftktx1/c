/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:56:56 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:25:06 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// did not include protorype of ftputchar
void	ft_print_comb2(void)
{
	char	array1[4];

	array1[0] = '0';
	while (array1[0] <= '9')
	{
		array1[1] = '0';
		while (array1[1] <= '9')
		{
			array1[2] = '0';
			while (array1[2] <= '9')
			{
				array1[3] = '0';
				while (array1[3] <= '9')
				{
					if (array1[0] != array1[2] && array1[1] != array1[3])
					{
						ft_putchar(array1[0]);
						ft_putchar(array1[1]);
						ft_putchar(' ');
						ft_putchar(array1[2]);
						ft_putchar(array1[3]);
						ft_putchar(',');
					}
					array1[3] = array1[3] + 1;
				}
				array1[2] = array1[2] + 1;
			}
			array1[1] = array1[1] + 1;
		}
		array1[0] = array1[0] + 1;
	}
}
