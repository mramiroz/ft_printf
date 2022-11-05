/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:55:00 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/05 13:35:48 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	LIBFTPRINTF_H_

# define	LIBFTPRINTF_H_

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char const *str, ...);

// Print diferent types

int		ft_selector(char type, va_list argptr);
int     ft_print_c(va_list arg);
int     ft_print_di(va_list arg);
int     ft_print_p(va_list arg);
int     ft_print_s(va_list arg);
int     ft_print_u(va_list arg);
int     ft_print_xX(va_list arg, char *base);
int     ft_putstr(char str);
char	*ft_strchr(const char *str, int ch);

# endif