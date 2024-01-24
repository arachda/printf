/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:53:38 by arachda           #+#    #+#             */
/*   Updated: 2024/01/18 11:12:55 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_puthex_l(unsigned int n);
int	ft_putaddre(void *p);
int	ft_putunsnbr(unsigned int n);
int	ft_puthex_u(unsigned int n);

#endif