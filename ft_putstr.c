/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:13:20 by mrarmiro-         #+#    #+#             */
/*   Updated: 2022/11/04 19:13:20 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putstr(char *str)
{
    int count;

    count = 0;
    if (!str)
        count = write(1, "(null)", 6);
    else
        count = write(1, &str, 1);
    return (count);
}
