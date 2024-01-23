/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:41:41 by abremont          #+#    #+#             */
/*   Updated: 2023/12/05 14:56:30 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
static void f(void *content)
{
	*(int *)content = 26;
}

#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;
	int	data = 42;

	lst = ft_lstnew( (void *)&data);
	lst1 = ft_lstnew( (void *)&data);
	lst2 = ft_lstnew( (void *)&data);

	lst->next = lst1;
	lst1->next = lst2;

	t_list	*temp = lst;

	while (temp)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}

	ft_lstiter(lst, f);

	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}

}*/
