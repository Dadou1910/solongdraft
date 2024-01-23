/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:09:31 by abremont          #+#    #+#             */
/*   Updated: 2023/12/06 15:30:04 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	while (src[i] && (i + j) < (size - 1))
	{
		dst[j + i] = src[i];
		i++;
	}
	if (i + j < size)
		dst[i + j] = '\0';
	if (size <= j)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + j);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
//	char	dest[] = NULL;
	char	src[] = "qwerty";
	size_t	size = 12;

	printf("%zu\n", ft_strlcat(NULL, src, size));
//	printf("%s\n", dest);

	char    dest1[] = "";
    char    src1[] = "qwerty";

    printf("%zu\n", strlcat(dest1, src1, size));
    printf("%s", dest1);

}*/
