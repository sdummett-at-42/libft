/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:06:01 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/23 15:57:51 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size == 1)
		*dest = 0;
	else if (size > 0)
	{
		while (--size && *(src + i))
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	*(dest + i) = 0;
	return (ft_strlen(src));
}
