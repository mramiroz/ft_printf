/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:23:28 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/03 13:47:04 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printx(int num)
{
	char numero;
	char *base;
	int count;

	count = 0;
	base = "0123456789abcdef";
	while (num > 0)
	{
		numero = base[num / 16];
		write(1, &numero, 1);
		num = num % 10;
		count++;
	}
	return (count);
}

int main()
{
	printx(1231232);
}