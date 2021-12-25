/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:32:38 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/25 11:53:48 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printnbr(unsigned long n, unsigned long div)
{
	while (div >= 10)
	{
		ft_putchar((n / div) + '0');
		n = n % div;
		div = div / 10;
	}
	ft_putchar(n + '0');
}

int	ft_putnbr(long n)
{
	int				i;
	int				len;
	unsigned long	number;
	unsigned long	div;

	len = 0;
	if (n < 0)
	{
		len = ft_putchar('-');
		number = n * -1;
	}
	else
		number = n;
	i = ft_numlen(number, 10);
	len = len + i;
	div = 1;
	while (i-- > 1)
		div = div * 10;
	ft_printnbr(number, div);
	return (len);
}
