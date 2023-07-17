/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:17:15 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/24 10:19:23 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//     printf("%c\n", toupper('a'));
//     printf("%c", ft_toupper('a'));
//     return(0);
// }
