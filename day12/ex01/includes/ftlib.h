/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 13:59:59 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/24 14:06:04 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIB_H
# define FTLIB_H
# include <fcntl.h>
# include <unistd.h>
# define BUF_SIZE 4096

void	ft_putchar(char c, int where_to_print);
void	ft_putstr(char *str, int where_to_print);
#endif
