/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:05:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/05 10:01:10 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(va_list arg)
{
	void	**adress;
	void	*pointer;
	int		i;
	int		count;

	pointer = va_arg(arg, void *);
	adress = &pointer;
	i = 0;
	count = 0;
	adress = &pointer;
	while (adress[i] != '/0')
	{
		write(1, adress[i], 1);
		count++;
	}
	return (count);
}
