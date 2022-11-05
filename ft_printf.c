/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:23:14 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/05 15:50:09 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		{
			if (str[i + 1] == '\0')
				return (-1);
			if (ft_strchr("cspdiuxX %", str[i + 1]) == 0)
			{
				count += write(1, "%", 1);
				count++;
				break;
			}
			count += ft_selector(str[++i], argptr);

		}
		else
			count += write(1, &str[i], 1);
		if (str[i] != '\0')
			i++;
	}
	return (count);
}
