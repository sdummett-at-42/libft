/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 21:00:50 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/09 23:24:13 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	while (count && *str1)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		count--;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
