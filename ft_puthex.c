/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:06:08 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/25 10:48:12 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printnbr(unsigned long n, unsigned long div, int upper)
{
	while (div >= 16)
	{
		if ((n / div) > 9)
		{
			if (upper == 1)
				ft_putchar((n / div) + 55);
			else
				ft_putchar((n / div) + 87);
		}
		else
			ft_putchar((n / div) + '0');
		n = n % div;
		div = div / 16;
	}
	if (n > 9)
	{
		if (upper == 1)
			ft_putchar(n + 55);
		else
			ft_putchar(n + 87);
	}
	else
		ft_putchar(n + '0');
}

int	ft_puthex(unsigned long n, int upper)
{
	int				i;
	int				len;
	unsigned long	div;

	len = 0;
	if (n < 0)
	{
		len = len + ft_putchar('-');
		n = n * -1;
		len = 1;
	}
	i = ft_numlen(n, 16);
	len = len + i;
	div = 1;
	while (i-- > 1)
		div = div * 16;
	ft_printnbr(n, div, upper);
	return (len);
}
