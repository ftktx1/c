/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:35:10 by mjacques          #+#    #+#             */
/*   Updated: 2018/01/14 17:12:52 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush02(int x, int y);
int ft_putchar(char c);

int	main(void)
{
	ft_putchar('1');
	rush02(4,10);
	ft_putchar('\n');
	
	ft_putchar('2');
	rush02(4,9);
	ft_putchar('\n');
	
	ft_putchar('3');
	rush02(4,22);
	ft_putchar('\n');
	
	ft_putchar('4');
	rush02(9,32);
	ft_putchar('\n');
		
	ft_putchar('5');
    rush02(7,10);
    ft_putchar('\n');	

	return (0);
}
