/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:55:49 by arachda           #+#    #+#             */
/*   Updated: 2024/01/18 18:41:03 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t n)
{
	int		t;
	char	*base;

	t = 0;
	if (n == 0)
		return (write(1, "0", 1));
	base = "0123456789abcdef";
	if (n >= 16)
	{
		t += ft_puthex(n / 16);
		t += ft_putchar(base[n % 16]);
	}
	else
		t += ft_putchar(base[n]);
	return (t);
}

int	ft_putaddre(void *p)
{
	int		t;
	size_t	n;

	t = 0;
	n = (size_t) p;
	t += ft_puthex(n);
	return (t);
}
