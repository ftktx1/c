/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 23:07:10 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/16 16:15:38 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int src_i;
	int dest_i;

	src_i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
