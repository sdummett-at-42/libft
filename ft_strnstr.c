/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:48:11 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/23 15:59:15 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_occurrences(const char *big, const char *little, size_t len)
{
	while (*little)
	{
		if (!len)
			return (0);
		if (*little == *big)
		{
			little++;
			big++;
		}
		else if (*little != *big || !*big)
			return (0);
		len--;
	}
	return (42);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!*little || little == 0)
		return ((char *)big);
	while (len && *big)
	{
		if (*big == *little)
		{
			if (check_occurrences(big, little, len))
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (0);
}
