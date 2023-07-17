/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:06:55 by shujiang          #+#    #+#             */
/*   Updated: 2023/02/06 19:22:28 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;

	d = ft_strlen(dst);
	if (d >= dstsize)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] && (i < dstsize - d - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + ft_strlen(src));
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	d;
// 	size_t	i;
// 	if (dst == NULL || dstsize == 0)
// 		return (ft_strnlen(src, dstsize));
// 	d = ft_strlen(dst);
// 	if (d >= dstsize)
// 		return (dstsize + ft_strlen(src));
// 	i = 0;
// 	while (src[i] && (i < dstsize - d - 1))
// 	{
// 		dst[d + i] = src[i];
// 		i++;
// 	}
// 	dst[d + i] = '\0';
// 	return (ft_strlen(src));
// }
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	dst_len;

// 	i = ft_strlen(dst);
// 	dst_len = ft_strlen(dst);
// 	if (dstsize == 0)
// 		return (ft_strlen(src));
// 	if (src == NULL || dst == NULL)
// 		return (dst_len + ft_strlen(src));
// 	if (dstsize < dst_len || dstsize < 1)
// 		return (dstsize + ft_strlen(src));
// 	j = 0;
// 	while (i < dstsize - 1 && src[j])
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}	
// 	dst[i] = '\0';
// 	return (dst_len + ft_strlen(src));
// }
//#include <stdio.h>
//#include <string.h>
//#include <unistd.h>
//int main(void)
//{
//    char dst[]= "";
//    const char src[]= "l2";
//    printf("%s\n", dst);
//    char dst2[15]= {'r','r','r','r','r','r',0,0,0,0,0,0,0,0,0};
//    char dst3[15]= {'r','r','r','r','r','r',0,0,0,0,0,0,0,0,0};
//    //const char src2[]= "lorem";
//	dst2[10] = 'a';
//	dst3[10] = 'a';
// printf("strlcat: %lu\n", strlcat(dst2, "lorem ipsum dolor sit amet", 1));
// printf("ft_strlcat: %lu\n", ft_strlcat(dst3, 
//"lorem ipsum dolor sit amet", 1));
//    printf("%s\n", dst2);
//    printf("ft:%s\n", dst3);
//	/*for (int i = 0; i< 15; ++i)
//		printf("%d{%d}\n",i, dst3[i]);
//	printf("--\n");
//	for (int i = 0; i< 15; ++i)
//		printf("%d{%d}\n",i, dst3[i]);*/
//	write(1, dst2, 15 );
//	write(1,"\n", 1);
//	write(1, dst3, 15 );
//	write(1,"\n", 1);
//    return(0);
//}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	//strlcat("hello", NULL, 5);
// 	ft_strlcat("hello", NULL, 5);
// 	//printf("%lu", strlcat);
// 	//printf("%lu", ft_strlcat);
// 	return (0);
// }