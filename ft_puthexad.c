/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexad.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 10:57:48 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/28 19:15:26 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexad(unsigned long n)
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
