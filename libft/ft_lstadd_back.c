/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:41:39 by abremont          #+#    #+#             */
/*   Updated: 2023/12/01 17:23:18 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	int	data1 = 1;
	int	data2 = 2;
	int	i = 0;

	new = ft_lstnew((void *)&data2);
	lst = ft_lstnew((void *)&data1);
	if (!lst)
		return (0);

	t_list	*node = lst;
	while (i < 5)
	{
		node->next = ft_lstnew((void *)&data1);
		if (!node->next)
			return (0);
		node = node->next;
		i++;
	}

	ft_lstadd_back(&lst, new);

	t_list	*temp = lst;

	while (temp)
	{
		t_list *next = temp->next;
		printf("%d\n", *(int *)temp->content);
		free(temp->content);
		free(temp);
		temp = next;
	}
}*/
