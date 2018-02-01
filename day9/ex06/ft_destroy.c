/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:33:55 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/19 13:54:57 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	free(factory);
	free(*factory);
	free(**factory);
	free(***factory);
}
