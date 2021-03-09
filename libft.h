/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 10:44:57 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/09 23:07:53 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

#include <stddef.h>
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *str);
int	ft_isalpha(int ch);
int	ft_tolower(int ch);
int	ft_toupper(int ch);
int	ft_isdigit(int ch);
int	ft_isalnum(int ch);
int	ft_isprint(int ch);
int	ft_isascii(int ch);
int	ft_strncmp(const char *str1, const char *str2, size_t count);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);

#endif
