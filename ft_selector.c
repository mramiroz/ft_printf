/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:24:43 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/05 15:37:35 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selector(char type, va_list argptr)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_print_c(argptr);
	else if (type == 's')
		count += ft_print_s(argptr);
	else if (type == 'i' || type == 'd')
		count += ft_print_di(argptr);
	else if (type == 'u')
		count += ft_print_u(argptr);
	else if (type == 'p')
	 	count += ft_print_p(argptr);
	else if (type == 'x')
		count += ft_print_xX(argptr, "0123456789abcdef");
	else if (type == 'X')
		count += ft_print_xX(argptr, "0123456789ABCDEF");
	else if (type == '%')
		count += write(1, "%", 1);
	return (count);
}
