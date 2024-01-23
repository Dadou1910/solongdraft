/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:24:12 by abremont          #+#    #+#             */
/*   Updated: 2023/12/06 16:02:12 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (!src && !dest && n)
		return (0);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Helloooo";
	char	dest[] = "Byyye";
	size_t	n = 6;
	

	printf("%s\n", (char *)ft_memmove(dest, src, n));
}*/
