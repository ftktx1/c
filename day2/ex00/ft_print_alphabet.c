/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 22:37:39 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/14 16:23:28 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// did not include prototype of ft_putchar
void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha = alpha + 1;
	}
}
