/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:23:40 by abremont          #+#    #+#             */
/*   Updated: 2023/12/05 17:57:05 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !f || !del)
		return (0);
	tmp = 0;
	while (lst)
	{
		tmp2 = ft_lstnew(f(lst->content));
		if (!tmp2)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		ft_lstadd_back(&tmp, tmp2);
		lst = lst->next;
	}
	return (tmp);
}
/*
static void	*f(void *content)
{
	*(int *)content = 26;
	return (content);
}

static void	del(void *content)
{
	*(int *)content = 0;
}
#include <stdio.h>
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*tmp;
	int	data = 42;

	lst1 = ft_lstnew((int *)&data);
	lst2 = ft_lstnew((int *)&data);
	lst3 = ft_lstnew((int *)&data);

	lst1->next = lst2;
	lst2->next = lst3;
	tmp = lst1;

	while (tmp)
	{
		printf("%d\n", *(int *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstmap(lst1, f, del);

	while (lst1)
    {
        printf("%d\n", *(int *)lst1->content);
        lst1 = lst1->next;
    }
}*/
