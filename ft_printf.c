/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:42:45 by neves             #+#    #+#             */
/*   Updated: 2025/11/16 22:57:56 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int     i;
    int     count;
    int     print;

    if (!format)
        return (-1);
    va_start(args, format);
    i = 0;
    count = 0;
    while (format[i])
    {
        if (format[i] == '%')
            print = ft_type(format[++i], args);
        else
            print = write(1, &format[i], 1);
        if (print == -1)
            return (va_end(args), -1); 
        count += print;
        i++;
    }
    va_end(args);
    return (count);
}

  