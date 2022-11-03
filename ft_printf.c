/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:23:14 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/03 12:20:39 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list	argptr;

	i = 0;
	count = 0;
	va_start(argptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			ft_selector(str[i++], argptr);
		else
		{
			write(1, &str[i], 1);			
			count++;
		}
		i++;
	}
	return (count);
}
