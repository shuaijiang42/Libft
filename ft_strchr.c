/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:36:25 by shujiang          #+#    #+#             */
/*   Updated: 2023/02/08 17:44:08 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char	*)s;
	if (s == NULL || c == '\0')
		return (NULL);
	while (*ptr != '\0' && *ptr !=c )
	{
		ptr++;
		if (*ptr == '\0')
			return(NULL);
	}	
	return (ptr);
} */

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char)c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	else
	{
		while (*s != (unsigned char)c && *s != '\0')
			s++;
		if (*s == '\0')
			return (0);
		else
			return ((char *)s);
	}
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
    char s[] = "teste";
    int c = '\0';
    printf("%s\n", ft_strchr(s, c));
    //printf("%s", strchr(s, c));
    return(0);
} */