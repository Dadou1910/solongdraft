/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:16:54 by abremont          #+#    #+#             */
/*   Updated: 2023/12/06 15:35:24 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	size_s;

	size_s = ft_strlen((char *)s) + 1;
	s1 = malloc(size_s * sizeof(char));
	if (!s1)
		return (0);
	ft_strlcpy(s1, s, size_s);
	return (s1);
}
/*
int	main(void)
{
	const char	s[] = "";

	printf("%s\n", ft_strdup(s));
	printf("%s", strdup(s));
}*/
