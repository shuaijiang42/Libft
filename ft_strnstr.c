/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:26:19 by shujiang          #+#    #+#             */
/*   Updated: 2023/02/08 18:33:22 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;
	char	*ptr;

	ptr = (char *)haystack;
	size = ft_strlen(haystack);
	if (*needle == '\0')
		return (ptr);
	if (len < ft_strlen(needle))
		return (NULL);
	if (*haystack == '\0' || len == 0)
		return (NULL);
	ptr = ft_strchr(haystack, *needle);
	if (len > size)
		len = size;
	if (!ptr)
		return (NULL);
	while (ptr && (size - ft_strlen(ptr) <= len - ft_strlen(needle))
		&& ft_strlen(ptr) >= ft_strlen(needle))
	{
		if (ft_strncmp(ptr, needle, ft_strlen(needle)) == 0)
			return (ptr);
		ptr = ft_strchr(ptr + 1, *needle);
	}
	return (NULL);
}

/* #include <string.h>
int main()
{
	char *str;
	char *str1;
	//str = strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	str1 = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	printf("%s\n", str1);
	//printf("%s\n", str1);
	return(0);
}  */