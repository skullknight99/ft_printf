/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:30:25 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/15 17:31:26 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s + start);
	if (len > i)
		len = i;
	t = ft_calloc(len + 1, sizeof(char));
	if (!t)
		return (NULL);
	if (start < ft_strlen(s) && len > 0)
		ft_memcpy(t, s + start, len);
	return (t);
}
