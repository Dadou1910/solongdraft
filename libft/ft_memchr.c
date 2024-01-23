/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:52:19 by abremont          #+#    #+#             */
/*   Updated: 2023/11/22 14:18:21 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	str[] = "123456789";
	unsigned char	c = 53;
	size_t n = 3;

	printf("%s\n", (unsigned char *)ft_memchr(str, c, n));
	printf("%s", (unsigned char *)memchr(str, c, n));
}*/
