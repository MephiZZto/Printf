/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:17:18 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/23 14:16:52 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_format(const char f, va_list	args)
{
	if (f == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (f == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (f == '%')
		ft_putchar_fd('%', 1);
	else if (f == 'd' || f == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (f == 'u')
		ft_putlongnbr_fd(va_arg(args, unsigned int), 1);
	else if (f == 'x')
		ft_puthex_fd(va_arg(args, long), 1, 0);
	else if (f == 'X')
		ft_puthex_fd(va_arg(args, long), 1, 1);
	else if (f == 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_puthex_fd(va_arg(args, long), 1, 0);
	}
}

int	ft_printf(const char *arg_string, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, arg_string);
	len = ft_strlen(arg_string);
	i = 0;
	while (i < len)
	{
		if (arg_string[i] != '%')
		{
			ft_putchar_fd(arg_string[i], 1);
		}
		else
		{
			i++;
			ft_format(arg_string[i], args);
		}
		i++;
	}
	va_end(args);
	return (0);
}
