/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 23:02:43 by neves             #+#    #+#             */
/*   Updated: 2025/11/20 20:02:49 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(const char *s)
{
	int	i;
	int	temp;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		temp = write(1, &s[i], 1);
		if (temp == -1)
			return (-1);
		i++;
	}
	return (i);
}
