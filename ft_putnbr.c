/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:32:38 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/24 10:24:29 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printnbr(long n, int div)
{
	while (n > 9)
	{
		ft_putchar((n / div) + '0');
		n = n % div;
		div = div / 10;
	}
	ft_putchar(n + '0');
}

int	ft_putnbr(long n)
{
	int		i;
	int		len;
	int		div;

	len = 0;
	if (n < 0)
	{
		len = len + ft_putchar('-');
		n = n * -1;
		len = 1;
	}
	i = ft_numlen(n, 10);
	len = len + i;
	div = 10;
	while (i-- > 2)
		div = div * 10;
	ft_printnbr(n, div);
	return (len);
}
