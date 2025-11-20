/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:34:08 by neves             #+#    #+#             */
/*   Updated: 2025/11/20 20:23:55 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_print_char(char c);
int	ft_print_hex(unsigned int n, char type);
int	ft_print_number(int n);
int	ft_print_pointer(void *p);
int	ft_print_string(const char *s);
int	ft_print_unsigned(unsigned int n);

int	ft_type(char c, va_list args);

#endif