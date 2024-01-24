/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:56:59 by arachda           #+#    #+#             */
/*   Updated: 2024/01/11 11:57:00 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_l(unsigned int n)
{
	int		t;
	char	*base;

	t = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		t += ft_puthex_l(n / 16);
		t += ft_putchar(base[n % 16]);
	}
	else
		t += ft_putchar(base[n]);
	return (t);
}
