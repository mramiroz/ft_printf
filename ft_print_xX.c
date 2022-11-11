/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:23:28 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/08 10:36:33 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhexa(unsigned int n, int count, char *base)
{	
	int	num;

	count = 0;
	if (n >= 16)
		count += ft_putnbrhexa(n / 16, count, base);
	num = base[n % 16];
	count += write(1, &num, 1);
	return (count);
}

int	ft_print_xx(va_list arg, char *base)
{
	int					count;
	unsigned int		num;

	count = 0;
	num = va_arg(arg, unsigned int);
	count += ft_putnbrhexa(num, 0, base);
	return (count);
}
