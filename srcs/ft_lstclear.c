/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:34:47 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/13 10:15:48 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*tmp;

	if (*lst)
	{
		curr = *lst;
		while (curr)
		{
			tmp = curr->next;
			(*del)(curr->content);
			free(curr);
			curr = tmp;
		}
	}
		*lst = 0;
}
