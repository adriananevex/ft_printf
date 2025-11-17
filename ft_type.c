/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:12:57 by neves             #+#    #+#             */
/*   Updated: 2025/11/16 23:30:58 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_type(char c, va_list args)
{
    if (c == 'c')
        return (ft_print_char(va_arg(args, int)));
    if (c == 'x' || c == 'X')
        return (ft_print_hex(va_arg(args, unsigned int), c));
    if (c == 'd' || c == 'i')
        return (ft_print_number(va_arg(args, int)));
    if (c == 'p')
        return (ft_print_pointer(va_arg(args, void *)));
    if (c == 's')
        return(ft_print_string(va_arg(args, const char *)));
    if (c == 'u')
        return (ft_print_unsigned(va_arg(args, unsigned int)));
    if (c == '%')
        return (write(1, "%", 1));
    return (0);
}