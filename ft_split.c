/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:10:14 by shujiang          #+#    #+#             */
/*   Updated: 2023/02/09 10:00:54 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	count_sub(const char *s, char c)
{
	int		count;
	char	*ptr;

	ptr = (char *)s;
	count = 0;
	if (!ptr || (c == '\0' && *ptr == '\0'))
		return (0);
	if (c == '\0' && *ptr != '\0')
		return (1);
	while (*ptr != '\0' && *ptr == c)
		ptr++;
	while (ft_strchr(ptr, c) != NULL)
	{
		count++;
		ptr = ft_strchr(ptr, c) + 1;
		while (*ptr != '\0' && *ptr == c)
			ptr++;
	}
	if (*ptr != '\0')
		count += 1;
	return (count);
}

int	count_substring_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0' && *s == c)
		s++;
	while (*s != c && *s)
	{
		len++;
		s++;
	}	
	return (len);
}

char	*write_substrings(const char *s, char c)
{
	char			*substr;
	int				substr_len;
	unsigned int	i;

	i = 0;
	substr_len = count_substring_len(s, c);
	substr = ft_substr(s, i, substr_len);
	if (!substr)
		return (NULL);
	substr[substr_len] = '\0';
	return (substr);
}

static void	*ft_free_strings(char	**strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		index;
	int		i;

	strings = NULL;
	i = 0;
	index = count_sub(s, c);
	strings = malloc((sizeof(char *) * (index + 1)));
	if (strings == NULL)
		return (NULL);
	while (*s == c && *s != '\0')
			s++;
	while (i < index)
	{
		strings[i] = write_substrings(s, c);
		if (strings[i] == NULL)
			return (ft_free_strings(strings));
		else
			s = s + ft_strlen(strings[i]);
		while (*s == c && *s != '\0')
			s++;
		i++;
	}
	strings[i] = NULL;
	return (strings);
}

/* char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		index;
	int		i;

	strings = NULL;
	i = 0;
	index = count_sub(s, c);
	strings = malloc((sizeof(char *) * (index + 1)));
	if (strings == NULL)
		return (NULL);
	while (*s == c && *s != '\0')
			s++;
	while (i < index)
	{
		strings[i] = write_substrings(s, c);
		if (strings[i] == NULL)
		{
			ft_free_strings(strings);
			return (0);
		}	
		else
			s = s + ft_strlen(strings[i]);
		while (*s == c && *s != '\0')
			s++;
		i++;
	}
	strings[i] = NULL;
	return (strings);
}
 */
/* int	main()
{
	char *str = "      split       this for   me  !       ";
	char c = ' ';
	int i;
	char **strings;
	
	i = 0;
	strings = ft_split(str, c);
	while (strings[i])
	{
		printf("%s\n", strings[i]);
		i++;
	}
	return (0);
} */