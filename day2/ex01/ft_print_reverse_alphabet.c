/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:39:36 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:23:47 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// did not include prototype of ft_printchar
void	ft_print_reverse_alphabet(void)
{
	char	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		ft_putchar(alpha);
		alpha = alpha - 1;
	}
}
