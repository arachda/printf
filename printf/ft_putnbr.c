/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:58:00 by arachda           #+#    #+#             */
/*   Updated: 2024/01/11 11:58:33 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	t;

	t = 0;
	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	if (n < 0)
	{
		t += write (1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		t += ft_putnbr(n / 10);
		t += ft_putchar((n % 10) + 48);
	}
	else
		t += ft_putchar('0' + n);
	return (t);
}
