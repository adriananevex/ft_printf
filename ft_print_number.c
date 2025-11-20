/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:53:09 by neves             #+#    #+#             */
/*   Updated: 2025/11/20 20:45:57 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int		count;
	int		temp;
	long	ln;

	count = 0;
	ln = n;
	if (ln < 0)
	{
		temp = ft_print_char('-');
		ln = -ln;
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (ln >= 10)
	{
		temp = ft_print_number(ln / 10);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	temp = ft_print_char((ln % 10) + '0');
	if (temp == -1)
		return (-1);
	return (count += temp);
}
