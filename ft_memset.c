/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:24:02 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/24 10:14:22 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)str;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*#include<stdio.h>
#include<string.h>
int	main(void)
{
	char str[]= "hello world";
	memset(str, 'a', 5);
	printf("%s\n", str);
	char str1[]= "hello world";
	ft_memset(str1, 'a',5);
	printf("%s\n", str1);
	char *str2 = NULL;
	printf("%s\n", memset(str2, 'a', 11));
	char *str3 = NULL;
	printf("%s\n", ft_memset(str3, 'a',11));
	return(0);
}*/