/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:10:38 by abremont          #+#    #+#             */
/*   Updated: 2023/12/06 15:52:13 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
/*
static void	replace(unsigned int i, char *str)
{
	while (str[i])
	{
		str[i] += 1;
		i++;
	}
}

int	main(void)
{
	char	str[] = "123456789";
	printf("%s\n", str);
	ft_striteri(str, &replace);
	printf("%s", str);
}*/
