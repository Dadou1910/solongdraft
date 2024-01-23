/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:52:26 by abremont          #+#    #+#             */
/*   Updated: 2023/12/05 15:21:27 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		next = temp->next;
		ft_lstdelone(temp, del);
		temp = next;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void	del(void *content)
{
	*(int *)content = 0;
}

int	main(void)
{
	t_list	*lst;
	int	data = 42;
	int	i = 0;

	lst = ft_lstnew((int *)&data);
	t_list	*temp = lst;
	while (i < 5)
	{
		temp->next = ft_lstnew((int *)&data);
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&lst, del);
	printf("%d", *(int *)lst->content);
}*/
