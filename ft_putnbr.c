/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:32:38 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/26 10:39:44 by dborgard         ###   ########.fr       */
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

int	ft_putnbr(long long int n)
{
	int				i;
	int				len;
	unsigned long	div;
	unsigned long	num;

	len = 0;
	if (n < 0)
	{
		len = len + ft_putchar('-');
		num = n * -1;
		len = 1;
	}
	else
		num = n;
	i = ft_numlen(num, 10);
	len = len + i;
	div = 1;
	while (i-- > 1)
		div = div * 10;
	ft_printnbr(num, div);
	return (len);
}
