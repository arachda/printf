/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:51:22 by arachda           #+#    #+#             */
/*   Updated: 2024/01/18 11:36:35 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nature(va_list ptr, char c)
{
	int	total;

	total = 0;
	if (c == 'd' || c == 'i')
		total += ft_putnbr(va_arg(ptr, int));
	else if (c == 'c')
		total += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		total += ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
	{
		total += ft_putstr("0x");
		total += ft_putaddre(va_arg(ptr, void *));
	}
	else if (c == 'x')
		total += ft_puthex_l(va_arg(ptr, unsigned int));
	else if (c == 'X')
		total += ft_puthex_u(va_arg(ptr, unsigned int));
	else if (c == 'u')
		total += ft_putunsnbr(va_arg(ptr, unsigned int));
	else if (c == '%')
		total += ft_putchar('%');
	return (total);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		total;

	total = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (total);
			total += nature(ptr, *str);
		}
		else
			total += ft_putchar(*str);
		str++;
	}
	va_end(ptr);
	return (total);
}
