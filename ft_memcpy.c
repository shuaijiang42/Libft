/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:38:06 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/23 16:13:08 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ptr;

	ptr = dest;
	if (dest == '\0' && src == '\0')
		return (0);
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		n--;
	}
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "hello world";
	char dest[] = "aaaaa";
	printf("ft_memcpy: %s\n", ft_memcpy(dest, src, 5));

	char src1[] = "hello world";
	char dest1[] = "aaaaa";
	printf("memcpy: %s\n",  memcpy(dest1, src1, 5));
	return(0);
}
*/