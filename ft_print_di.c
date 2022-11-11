/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:38:22 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/08 10:17:43 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int count)
{	
	int	num;

	count = 0;
	if (n == -2147483648)
		count += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			count += write(1, "-", 1);
			n *= -1;
		}
		if (n > 9)
			count += ft_putnbr(n / 10, count);
		num = (n % 10) + '0';
		count += write(1, &num, 1);
	}
	return (count);
}

int	ft_print_di(va_list arg)
{
	int	num;
	int	count;

	num = va_arg(arg, int);
	count = ft_putnbr(num, 0);
	return (count);
}
