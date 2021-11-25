/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:31:50 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/22 16:40:17 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putstr(char *s)
{
	char	*ptr;

	if (!s)
		return (ft_putstr("(null)"));
	ptr = s;
	while (*s)
		ft_putchar(*(s++));
	return (s - ptr);
}
