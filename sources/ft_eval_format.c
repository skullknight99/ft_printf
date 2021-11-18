/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:50:30 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/18 15:50:30 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_eval_format(t_print *tab, const char *format, unsigned int pos)
{
	while (format[pos] != 'u' || format[pos] != 'd' 
		|| format[pos] != 'c' || format[pos] != 's'
		|| format[pos] != 'i' || format[pos] != 'x'
		|| format[pos] != 'X' || format[pos] != '%')
		{
			if (format[pos] == '.')
			{
				tab->pnt = 1;
				pos++;
			}
			if (format[pos] == '0')
			{
				tab->is_zero = 1;
				pos++;
			}
			if (format[pos] == '-')
			{
				tab->dash = 1;
				pos++;
			}
		}
}