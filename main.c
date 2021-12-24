/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:18:46 by dborgard          #+#    #+#             */
/*   Updated: 2021/12/24 10:50:01 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	unsigned int number = 4294967295;
	int	strlen;
	char *ptr;

	//ft_printf("dosfirst value: %p second value: %u\n", &ptr, number);
	//printf("dosfirst value: %p second value: %u\n", &ptr, number);
	
	
	//strlen = printf("%x\n", 87123978);
	//printf("%i\n", strlen);
	strlen = ft_printf("%X\n", 234245234);
	//ft_printf("%i\n", strlen);
	return (0);
}/*
531680a
8

*/