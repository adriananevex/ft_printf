/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:39:17 by neves             #+#    #+#             */
/*   Updated: 2025/11/20 20:48:59 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char type)
{
	char	*ref;
	int		count;
	int		temp;

	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (type == 'X')
		ref = "0123456789ABCDEF";
	else
		ref = "0123456789abcdef";
	if (n >= 16)
	{
		temp = ft_print_hex(n / 16, type);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	temp = ft_print_char(ref[n % 16]);
	if (temp == -1)
		return (-1);
	count += temp;
	return (count);
}
