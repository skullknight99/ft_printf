/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:47:44 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/23 11:49:08 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static void	ft_print_to_stdout(char format, const void *value, int *len)
{
	if (format == 'd' || format == 'i')
		*len += ft_putnbr((int)value);
	else if (format == 'u')
		*len += ft_putnbr_unsigned((unsigned)value);
	else if (format == 's')
		*len += ft_putstr((char *)value);
	else if (format == 'c')
		*len += ft_putchar((char)value);
	else if (format == 'p')
		*len += ft_print_ptr((void *)value);
	else if (format == 'x')
		*len += ft_putnbr_base((unsigned int)value, "0123456789abcdef");
	else if (format == 'X')
		*len += ft_putnbr_base((unsigned int)value, "0123456789ABCDEF");
	else if (format == '%')
		*len += ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	void		*next;
	va_list		lst;
	int			len;

	len = 0;
	va_start(lst, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format != '%')
				next = va_arg(lst, void *);
			ft_print_to_stdout(*format, next, &len);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(lst);
	return (len);
}
