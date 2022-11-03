/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:05:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/03 13:46:53 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printp(void *pointer)
{
	char *adress;
	int i;
	int count;

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

int main()
{
	void *p = NULL;
	printp(p);
}
