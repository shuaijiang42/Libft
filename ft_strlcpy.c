/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:59:30 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/24 09:54:12 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include<string.h>
// int main(void)
// {
//     char dst[] = "hello world";
//     const char src[] = "qwertyuuiodkgzv";
//     printf("%zu\n", strlcpy(dst, src, 0));
//     printf("%s\n", dst);
//     char dst1[] = "hello world";
//     const char src1[] = "qwertyuuiodkgzv";
//     printf("%zu\n", ft_strlcpy(dst1, src1, 0));
//     printf("%s\n", dst1);
//     return(0);
// }