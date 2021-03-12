/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:52:21 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/11 19:48:25 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	size_strs(char const *s, char c)
{
	int	size;

	size = 1;
	while (*s)
	{
		if (*s == c)
		{
			while (*s && *s == c)
				s++;
			size++;
		}
		else
			s++;
	}
	if (*(s - 1) == c)
		size--;
	return (size);
}

char const	*splitcpy(char **strs, char const *s, char c, int j)
{
	int	i;
	int	len;

	len = 0;
	while (!((*s + len) == c) && *(s + len))
		len++;
	if (!(strs[j] = malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (!(*s == c) && *s)
	{
		strs[j][i] = *s;
		i++;
		s++;
	}
	strs[j][i] = 0;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int	j;
	char	**strs;

	if (!(strs = malloc(sizeof(char *) * size_strs(s, c) + 1)))
		return (0);
	j = 0;
	while (*s)
	{
		if (!(*s == c))
		{
			s = splitcpy(strs, s, c, j);
			j++;
		}
		else
			s++;
	}
	strs[j] = 0;
	return (strs);
}
