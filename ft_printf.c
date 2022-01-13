/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:17:18 by dborgard          #+#    #+#             */
/*   Updated: 2022/01/13 10:41:13 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char f, va_list	args)
{
	int	strlen;

	strlen = 0;
	if (f == 'c')
		strlen = ft_putchar(va_arg(args, int));
	else if (f == 's')
		strlen = ft_putstr(va_arg(args, char *));
	else if (f == '%')
		strlen = ft_putchar('%');
	else if (f == 'd' || f == 'i')
		strlen = ft_putnbr(va_arg(args, int));
	else if (f == 'u')
		strlen = ft_putnbr(va_arg(args, unsigned int));
	else if (f == 'x')
		strlen = ft_puthex(va_arg(args, unsigned int), 0);
	else if (f == 'X')
		strlen = ft_puthex(va_arg(args, unsigned int), 1);
	else if (f == 'p')
		strlen = ft_puthexad(va_arg(args, unsigned long int));
	return (strlen - 2);
}

int	ft_printf(const char *arg_string, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		strlen;

	va_start(args, arg_string);
	len = ft_strlen(arg_string);
	i = 0;
	strlen = 0;
	while (i < len)
	{
		if (arg_string[i] != '%')
		{
			ft_putchar(arg_string[i]);
		}
		else
		{
			i++;
			strlen = strlen + ft_format(arg_string[i], args);
		}
		i++;
	}
	va_end(args);
	return (i + strlen);
}
