/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:18:16 by abremont          #+#    #+#             */
/*   Updated: 2023/12/01 17:20:33 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int	data1 = 1;
	int	data2 = 2;

	node1 = ft_lstnew((void *)&data1);
	node2 = ft_lstnew((void *)&data1);
	node3 = ft_lstnew((void *)&data2);

	node1->next = node2;
	node2->next = node3;

	printf("%d", *(int *)ft_lstlast(node1)->content);

	free(node1);
	free(node2);
	free(node3);
}*/
