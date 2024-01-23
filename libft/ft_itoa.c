/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:10:03 by abremont          #+#    #+#             */
/*   Updated: 2023/12/06 15:32:55 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	count_char(long nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count = 1;
	}
	if (nb == 0)
	{
		count = 1;
	}
	else
	{
		while (nb)
		{
			nb = nb / 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	count;
	char	*str;
	size_t	neg;
	long	nb;

	nb = (long)n;
	neg = 0;
	count = count_char(n);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
		neg = 1;
	}
	str[count] = '\0';
	while (count > neg)
	{
		str[count - 1] = nb % 10 + '0';
		nb = nb / 10;
		count--;
	}
	return (str);
}
/*
int	main(void)
{
	int	i = -548578;

	printf("%s", ft_itoa(i));
}*/
