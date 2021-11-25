/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:09:32 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/22 16:40:41 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	calculate_length(long int nb, char *base)
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

int	ft_putnbr_base(long nb, char *base)
{
	long long	n;
	int			len;

	len = 0;
	if (nb < 0)
	{
		len++;
		write(1, "-", 1);
		nb = -nb;
	}
	n = nb;
	if (nb <= (long)ft_strlen(base) - 1)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
	return (len + calculate_length(n, base));
}
