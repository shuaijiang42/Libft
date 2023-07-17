/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:11:48 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/27 16:01:48 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char )s1[i] == (unsigned char )s2[i]
		&& s1[i] && s2[i] && i < n -1)
		i++;
	return ((unsigned char )s1[i] - (unsigned char )s2[i]);
}

// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
//     const char s1[] = "abcdefgh";
//     const char s2[] = "abcdwxyz";
//     printf("%d\n", ft_strncmp(s1, s2, 4));
//     printf("%d", strncmp(s1, s2, 4));
//     return(0);
// }