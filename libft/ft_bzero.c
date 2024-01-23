/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:12:26 by abremont          #+#    #+#             */
/*   Updated: 2023/12/07 15:33:33 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>
//#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	size_t	n;
	char	p[] = "Hello";
	void	*str;
	size_t	i;

	str = p;
	i = 0;
	n = 4;
	printf("%i/n", (int *)bzero(str, n));
	while (i < n || p[i])
	{
		p[i] += 48;
		write (1, &p[i], 1);
		i++;
	}
}*/
