/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:36:45 by shujiang          #+#    #+#             */
/*   Updated: 2023/01/24 10:14:48 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//     printf("%c\n", tolower('A'));
//     printf("%c", ft_tolower('A'));
//     return(0);
// }