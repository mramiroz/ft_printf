/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:05:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/08 10:17:57 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbrhexal(unsigned long long n, int count, char *base)
{	
	int	num;

	count = 0;
	if (n >= 16)
		count += ft_putnbrhexal(n / 16, count, base);
	num = base[n % 16];
	count += write(1, &num, 1);
	return (count);
}

int	ft_print_p(va_list arg)
{
	unsigned long long	value;
	int					count;

	value = va_arg(arg, unsigned long long);
	count = write(1, "0x", 2);
	count += ft_putnbrhexal(value, count, "0123456789abcdef");
	return (count);
}
