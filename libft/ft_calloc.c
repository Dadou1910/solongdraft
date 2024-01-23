/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:57:54 by abremont          #+#    #+#             */
/*   Updated: 2023/11/22 16:28:19 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (size == 0 || nmemb == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb * size / size != nmemb)
		return (0);
	str = malloc(sizeof(char) * (nmemb * size));
	if (!str)
		return (0);
	ft_bzero(str, nmemb * size);
	return (str);
}
/*
#include <string.h>
int	main(void)
{
	size_t a = 6;
	size_t b = 1;
	char	*s1 = ft_calloc(a, b);
	char	*s2 = calloc(a, b);

	strncpy(s1, "12345678", a);
	strncpy(s2, "12345678", a);
	printf("%s\n", s1);
	printf("%s", s2);

	free(s1);
	free(s2);
}*/
