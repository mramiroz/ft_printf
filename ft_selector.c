/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:24:43 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/03 11:45:05 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_selector(char type, va_list argptr)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_printc(va_arg(argptr, int));
	else if (type == 's')
		count += ft_prints(va_arg(argptr, char *));
	return (count);
}
