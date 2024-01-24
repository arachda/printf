/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:59:40 by arachda           #+#    #+#             */
/*   Updated: 2024/01/11 11:59:41 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsnbr(unsigned int n)
{
	unsigned int	t;

	t = 0;
	if (n > 9)
	{
		t += ft_putunsnbr(n / 10);
		t += ft_putunsnbr(n % 10);
	}
	else
		t += ft_putchar('0' + n);
	return (t);
}
