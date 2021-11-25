/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:41:14 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/22 16:41:41 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_ptr(void *p)
{
	unsigned long	x;

	x = (unsigned long)p;
	ft_putstr("0x");
	return (ft_putnbr_base_ptr(x, "0123456789abcdef") + 2);
}
