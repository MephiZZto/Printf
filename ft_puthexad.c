/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 10:57:48 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/25 11:08:00 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmem(unsigned long n)
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
