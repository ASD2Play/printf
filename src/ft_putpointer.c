/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alasoare <alasoare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:13:45 by alasoare          #+#    #+#             */
/*   Updated: 2024/10/24 15:20:57 by alasoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putpointer(unsigned long ptr)

{
	int	count;

	count = 0;
	if (ptr == 0)
	{
		count += ft_putstr("(nil)");
	}
	else
	{
		count += ft_putstr("0x");
		count += ft_puthex(ptr, 0);
	}
	return (count);
}
