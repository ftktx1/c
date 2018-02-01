/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 17:16:09 by nshah             #+#    #+#             */
/*   Updated: 2018/01/28 23:38:29 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*append_str(char *str, char *a_str, int a_len, int str_len);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
#endif
