/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:56:32 by shujiang          #+#    #+#             */
/*   Updated: 2023/02/08 17:57:28 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if ((unsigned char)c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
			i++;
		while (i >= 0 && s[i] != (unsigned char)c)
			i--;
		if (i < 0)
			return (0);
		else
			return ((char *)(s + i));
	}
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char s[] = "bonjour";
//     int c = 's';
//     printf("%s\n", ft_strrchr(s, c));
// 	   char s1[] = "bonjour";
//     printf("%s", strrchr(s, c));
//     return(0);
// }