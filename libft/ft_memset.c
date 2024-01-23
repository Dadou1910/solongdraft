/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:14:48 by abremont          #+#    #+#             */
/*   Updated: 2023/11/15 14:48:49 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;
	char		*p;

	i = 0;
	p = str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*
int	main(void)
{
	void	*str;
	char	p[] = "Hello";
	int	c;
	int	n;
	int	i;

	str = p;
	c = 97;
	n = 3;
	i = 0;
	printf("%s\n",(char *)memset(str, c, n));
	while (i < n || p[i])
	{
		write(1, &p[i], 1);
		i++;
	}
//	printf("%p", memset(str, c, n));
}
*/
