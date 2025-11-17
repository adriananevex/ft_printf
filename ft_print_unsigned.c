/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 23:11:51 by neves             #+#    #+#             */
/*   Updated: 2025/11/17 23:23:47 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
    unsigned long   num;
    int             count;
    int             temp;

    num = n;
    count = 0;
    if (num >=10)
    {
        temp = ft_print_unsigned(num / 10);
        if (temp == -1)
            return (-1);
        count += temp;
    }
    temp = ft_print_char((n % 10) + '0');
    if (temp == -1)
        return (-1);
    count += temp;
    return (count);
}
