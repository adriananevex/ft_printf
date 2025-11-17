/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:42:00 by neves             #+#    #+#             */
/*   Updated: 2025/11/17 23:00:54 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_print_hlong(unsigned long num)
{
    int     count;
    int     temp;
    char    *ref;   

    count = 0;
    ref = "0123456789abcdef";
    if (num >= 16)
    {
        temp = ft_print_hlong(num / 16);
        if (temp == -1)
            return (-1);
        count += temp;
    }
    temp = ft_print_char(ref[num % 16]);
    if (temp == -1)
        return (-1);
    count += temp;
    return (count);
}

int ft_print_pointer(void *p)
{
    int             count;
    int             temp;
    unsigned long   add;
    
    if (!p)
        return (ft_print_string("(nil)"));
    count = 0;
    add = (unsigned long)p;
    temp = ft_print_string("0x");
    if (temp == -1)
        return (-1);
    count += temp;
    temp = ft_print_hlong(add);
    if (temp == -1)
        return (-1);
    count += temp;
    return (count);
}
