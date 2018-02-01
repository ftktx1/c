/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 11:53:46 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/16 12:44:34 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_str(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i > 1)
	{
		write_str(argv[i - 1]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
