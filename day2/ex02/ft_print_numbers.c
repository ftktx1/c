/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:53:50 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:24:11 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// did not include prototype of ftputchar
void	ft_print_numbers(void)
{
	char	alpha;

	alpha = '0';
	while (alpha <= '9')
	{
		ft_putchar(alpha);
		alpha = alpha + 1;
	}
}
