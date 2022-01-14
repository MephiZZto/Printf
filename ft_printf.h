/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:13:17 by dborgard          #+#    #+#             */
/*   Updated: 2022/01/14 09:36:14 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *arg_string, ...);
int		ft_strlen(const char *s);
int		ft_dividing(long n, int base);
int		ft_putchar(char c);
long	ft_putstr(char *s);
int		ft_putnbr(long long int n);
int		ft_puthex(unsigned long n, int upper);
int		ft_puthexad(unsigned long n);

#endif