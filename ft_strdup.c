/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:20:25 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/27 11:43:28 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	ptr = malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// int main(int argc, char **argv)
// {
//     char *mine;
//     char *real;
//     argc = 2;
//     if (argc == 2)
//     {
//         mine = ft_strdup(argv[1]);
//         real = strdup(argv[1]);
//         printf("mine: %s\nreal: %s", mine, real);
//     }
//     return(0);
// }