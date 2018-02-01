/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:20:06 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/29 13:20:38 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*append_str(char *str, char *a_str, int a_len, int str_len);
void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif
