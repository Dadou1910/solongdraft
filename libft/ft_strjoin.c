/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:33:38 by abremont          #+#    #+#             */
/*   Updated: 2023/11/23 15:18:53 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*news;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (ft_strdup(""));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	news = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!news)
		return (0);
	ft_memmove(news, s1, lens1 + 1);
	ft_memmove(news + lens1, s2, lens2);
	news[lens1 + lens2] = '\0';
	return (news);
}
/*
int	main(void)
{
	char const	s1[] = "Hello, ";
	char const	s2[] = "my name is Audrey";

	char	*res = ft_strjoin(NULL, s2);
	printf("%s", res);
	free(res);
}*/
