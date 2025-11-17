/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 23:53:09 by neves             #+#    #+#             */
/*   Updated: 2025/11/16 23:54:53 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_number(int n)
{
	char	num;
	long	ln;

	ln = n;
	if (fd < 0)
		return ;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln >= 10)
	{
		ft_putnbr_fd((ln / 10), fd);
	}
	num = (ln % 10) + '0';
	ft_putchar_fd(num, fd);
}

