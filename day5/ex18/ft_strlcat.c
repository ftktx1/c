/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:51:47 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/16 16:33:30 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_i;
	unsigned int dest_i;

	src_i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0' && src_i < size)
	{
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (src_i + size);
}
