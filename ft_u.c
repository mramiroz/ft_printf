/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:50:36 by mrarmiro-         #+#    #+#             */
/*   Updated: 2022/11/04 20:50:36 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int n, int count)
{	
	int num;

	count = 0;
	if (n > 9)
		count += ft_putnbru(n / 10, count);
	num = (n % 10) + '0';
	count += write(1, &num, 1);
	return (count);
}

int	ft_u(va_list arg)
{
	unsigned int num;
	int count;

	count = 0;
	num = va_arg(arg, unsigned int);
	count += ft_putnbru(num, 0);
	return (count);
}