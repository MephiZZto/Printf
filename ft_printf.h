/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:13:17 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/25 11:54:05 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> //just for testing REMOVE

int		ft_printf(const char *arg_string, ...);
size_t	ft_strlen(const char *s);
int		ft_numlen(long n, int base);
int		ft_putchar(char c);
long	ft_putstr(char *s);
int		ft_putnbr(long n);
int		ft_puthex(unsigned long n, int upper);
int		ft_putmem(unsigned long n);

#endif