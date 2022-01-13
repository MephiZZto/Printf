/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:18:46 by dborgard          #+#    #+#             */
/*   Updated: 2022/01/13 10:49:39 by dborgard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	unsigned int uint_num = 4294967295;
	long long_num = 9223372036854775807;
	int test;
	int	strlen;
	char *ptr;
	test = -14;
	strlen = printf(" %u% %u %u", test, test);
	//printf("\nString Length: %i\n", strlen);
	//strlen = ft_printf(" %u% %u ", test, test);
	//ft_printf("\nString Length: %i\n", strlen);
	return (0);
}