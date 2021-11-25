/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:07:46 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/22 16:40:52 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	calculate_length_ptr(unsigned long nb, char *base)
{
	int		i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		i++;
		nb /= ft_strlen(base);
	}
	return (i);
}

int	ft_putnbr_base_ptr(unsigned long nb, char *base)
{
	int		len;

	len = 0;
	if (nb <= (unsigned long)ft_strlen(base) - 1)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
	return (len + calculate_length_ptr(nb, base));
}
