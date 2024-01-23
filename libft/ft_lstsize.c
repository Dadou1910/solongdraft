/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:43:17 by abremont          #+#    #+#             */
/*   Updated: 2023/11/29 19:17:58 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main(void)
{
	t_list	*node1 = ft_lstnew("First node");
	t_list	*node2 = ft_lstnew("Second node");
	t_list	*node3 = ft_lstnew("Third node");

	node1->next = node2;
	node2->next = node3;

	printf("%d", ft_lstsize(node1));

	free(node1);
	free(node2);
	free(node3);
}*/
