/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:21:00 by dborgard          #+#    #+#             */
/*   Updated: 2022/01/14 10:27:52 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#if linux

int	ft_puthexadd(unsigned long n)
{
	int	len;

	if (n > 0)
	{
		len = ft_putstr("0x");
		len = len + ft_puthex(n, 0);
		return (len);
	}
	else
	{
		write(1, "(nil)", 5);
		return (5);
	}
}

#else

int	ft_puthexadd(unsigned long n)
{
	int	len;

	len = ft_putstr("0x");
	len = len + ft_puthex(n, 0);
	return (len);
}

#endif
