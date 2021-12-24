/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:23:51 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/24 09:19:41 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_putstr(char *s)
{
	long len;

	len = ft_strlen(s);
	if (!s)
		return (0);
	write(1, s, len);
	return (len);
}
