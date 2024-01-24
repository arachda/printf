/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:57:21 by arachda           #+#    #+#             */
/*   Updated: 2024/01/18 11:07:58 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_u(unsigned int n)
{
	int		t;
	char	*base;

	t = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		t += ft_puthex_u(n / 16);
		t += ft_putchar(base[n % 16]);
	}
	else
		t += ft_putchar(base[n]);
	return (t);
}
