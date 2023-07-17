/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:34:32 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/23 18:18:32 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && i < n -1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <string.h>
// #include <stdio.h>
// int main(int argc, char** argv)
// {
// 	int mine;
// 	int real;
// 	argc = 2;
// 	mine = ft_memcmp(argv[1], argv[2], 5);
// 	real = memcmp(argv[1], argv[2], 5);
// 	if (argc == 2)
// 	{
// 		printf("real: %d\n", real);
// 		printf("mine: %d", mine);
// 	}
// 	return (0);
// }