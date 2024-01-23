/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:10:48 by abremont          #+#    #+#             */
/*   Updated: 2023/11/27 14:02:20 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	char_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	while (char_set(s1[start], set) == 1)
		start++;
	if (start == ft_strlen(s1))
		return (str = ft_strdup(""));
	while (char_set(s1[end - 1], set) == 1)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
/*
int	main(void)
{
	char const	s1[] = "1";
	char const	set[] = "";
	char	*str = ft_strtrim(s1, NULL);

	printf("%s", str);

	free(str);
}*/
