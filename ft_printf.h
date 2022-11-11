/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:32:32 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/08 10:43:58 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

//Print function and type selector
int		ft_printf(char const *str, ...);
int		ft_selector(char type, va_list argptr);
//Print different types of data
int		ft_print_c(va_list arg);
int		ft_print_di(va_list arg);
int		ft_print_p(va_list arg);
int		ft_print_s(va_list arg);
int		ft_print_u(va_list arg);
int		ft_print_xx(va_list arg, char *base);
char	*ft_strchr(const char *str, int ch);

#endif