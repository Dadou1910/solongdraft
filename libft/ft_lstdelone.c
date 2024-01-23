/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abremont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:24:46 by abremont          #+#    #+#             */
/*   Updated: 2023/12/01 17:52:04 by abremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}
/*
#include <stdio.h>

static void del(void *content)
{
	*(int *)content = 0;
}

int	main(void)
{
	t_list	*lst;
	int	data = 42;
	lst = ft_lstnew((void *)&data);
	printf("%d\n", *(int *)lst->content);
	ft_lstdelone(lst, &del);
	printf("%d", *(int *)lst->content);
}*/
