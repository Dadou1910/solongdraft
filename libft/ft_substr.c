/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:42:48 by abremont          #+#    #+#             */
/*   Updated: 2023/11/23 14:52:37 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	lens;
	size_t	i;

	if (!s)
		return (0);
	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
			substr[i] = s[start + i];
			i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	const char	s[] = "";
	unsigned int	start = 6;
	size_t	len = 4;

	printf("%s", ft_substr(s, start, len));
}*/
