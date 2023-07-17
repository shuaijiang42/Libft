/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:22:13 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/24 10:12:08 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[]= "hello world";
	ft_bzero(str, sizeof(char)*5);
	printf("%s\n", str+6);
	bzero(str, sizeof(char)*5);
	printf("%s", str+6);
	return(0);
}*/
