/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:40:09 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/16 16:19:40 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	src_i;
	int	dest_i;

	src_i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0' && src_i < nb)
	{
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
