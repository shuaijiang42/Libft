/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:53:40 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/24 10:11:55 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-' )
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(int argc, char **argv)
// {
//     int mine;
//     int real;

//     argc = 2;
//     if (argc == 2)
//     {
//         mine = ft_atoi(argv[1]);
//         real = atoi(argv[1]);
//         printf("mine: %d \nreal: %d", mine, real);
//     }
//     return(0);
// }
