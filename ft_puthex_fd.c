/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:06:08 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/23 14:49:41 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_fd(long n, int fd, int upper)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = ln * -1;
	}
	if (ln <= 15)
	{
		if (ln > 9)
		{
			if (upper == 1)
				ft_putchar_fd(ln + 55, fd);
			else
				ft_putchar_fd(ln + 87, fd);
		}
		else
			ft_putchar_fd(ln + '0', fd);
	}
	else
	{
		ft_puthex_fd(ln / 16, fd, upper);
		ft_puthex_fd(ln % 16, fd, upper);
	}
}
