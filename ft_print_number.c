/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:53:09 by neves             #+#    #+#             */
/*   Updated: 2025/11/17 23:29:41 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_number(int n)
{
	int	count;
	long	ln;

	count = 0;
	ln = n;
	if (ln < 0)
	{
		count += ft_print_char('-');
		ln = -ln;
	}
	if (ln >= 10)
	{
		count += ft_print_number(ln / 10);
	}
	count += (ln % 10) + '0';
	return (count);
}
