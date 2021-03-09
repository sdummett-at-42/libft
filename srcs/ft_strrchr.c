/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:33:37 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/09 22:41:18 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	const char *ptr;

	ptr = 0;
	if (ch == 0)
		return ("");
	while (*str)
	{
		if (*str == ch)
			ptr = str;
		str++;
	}
	return ((char*)ptr);
}
