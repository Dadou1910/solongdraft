/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:58:17 by abremont          #+#    #+#             */
/*   Updated: 2023/12/05 17:58:12 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	**lst;
	t_list	*new;
	int	data = 42;
	int	data1 = 41;
	int	i = 0;

	new = ft_lstnew((void *)&data1);
	lst = (t_list **)malloc(sizeof(t_list *));
	*lst = ft_lstnew((void *)&data);
	while (i < 5)
	{
		t_list *node = ft_lstnew((void *)&data);
		node->next = *lst;
		*lst = node;
		i++;
		
	}
	ft_lstadd_front(lst, new);
	t_list *temp  = *lst;
	while (temp)
	{
		printf("%d\n", *(int *)(temp->content));
		temp = temp->next;
	}

	temp = *lst;
	while (temp)
	{
		free(temp->content);
		free(temp);
		temp = temp->next;
	}
	free(lst);
}*/
