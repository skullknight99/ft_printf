/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:38:01 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/15 18:27:16 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*srx;
	char	*dst;

	srx = (char *)src;
	dst = (char *)dest;
	if (srx == dst || n == 0)
		return (dest);
	if (dst > srx)
	{
		i = n - 1;
		while (i >= 0)
		{
			dst[i] = srx[i];
			i--;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
