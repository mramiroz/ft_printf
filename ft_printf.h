/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:55:00 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/03 13:41:12 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	LIBFTPRINTF_H_

# define	LIBFTPRINTF_H_

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char const *str, ...);

// Print diferent types

int		ft_selector(char type, va_list argptr);
int		ft_printc(char c);
int		ft_prints(char *str);
int		ft_printi(int n);

# endif