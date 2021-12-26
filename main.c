/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:18:46 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/26 10:33:22 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

/*
int	ft_num_args(const char *s)
{
	int	i;
	int	num;

	if (!s)
		return (0);
	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == 'c' || s[i + 1] == 's' || s[i + 1] == 'p'
				|| s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u'
				|| s[i + 1] == 'x' || s[i + 1] == 'X' || s[i + 1] == '%')
			{
				num++;
			}
			else
				return (0);
		}
		i++;
	}
	return (num);
}*/

int	main(void)
{
	unsigned int uint_num = 4294967295;
	long long_num = 9223372036854775807;
	int test;
	int	strlen;
	char *ptr;
	test = -14;
	//ft_printf("dosfirst value: %p second value: %u\n", &ptr, number);
	//printf("dosfirst value: %p second value: %u\n", &ptr, number);
	
	
	strlen = printf(" %u ", test);
	//printf("\nString Length: %i\n", strlen);
	strlen = ft_printf(" %u ", test);
	//ft_printf("\nString Length: %i\n", strlen);
	return (0);
}