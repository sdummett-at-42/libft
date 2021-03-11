/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:33:37 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/11 16:22:58 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	const char *ptr;

	ptr = 0;
	while (*str)
	{
		if (*str == ch)
			ptr = str;
		str++;
	}
	if (*str == ch)
		return ((char *)str);
	return ((char*)ptr);
}
