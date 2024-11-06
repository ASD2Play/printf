/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alasoare <alasoare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:21:35 by alasoare          #+#    #+#             */
/*   Updated: 2024/10/24 16:00:23 by alasoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	handle_conversion(const char *format, va_list args, int *i)

{
	int	count;

	count = 0;
	if (format[*i] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format[*i] == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format[*i] == 'd' || format[*i] == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format[*i] == 'p')
		count += ft_putpointer(va_arg(args, unsigned long));
	else if (format[*i] == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 0);
	else if (format[*i] == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 1);
	else if (format[*i] == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (format[*i] == '%')
		count += ft_putchar('%');
	(*i)++;
	return (count);
}

int	ft_printf(const char *format, ...)

{
	va_list		args;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_conversion(format, args, &i);
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
