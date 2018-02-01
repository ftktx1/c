/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 18:15:48 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/28 23:45:49 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush(int x, int y);

int ft_atoi(char *str)
{
    int str_i;
    int ret_i;

    str_i = 0;
    ret_i = 0;
    while (str[str_i] != '\0' && (str[str_i] <= '9' && str[str_i] >= '0'))
    {
        ret_i = (ret_i * 10) + (str[str_i] - 48);
        str_i++;
    }
    return (ret_i);
}

int	main(int argc, char **argv)
{
	int x = ft_atoi(argv[1]);
	int y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
