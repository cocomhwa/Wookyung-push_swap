/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:17:20 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/25 21:01:29 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstdelone(t_node *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	lstclear(t_node **lst, void (*del)(void *))
{
	t_node	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = 0;
}

void	lstiter(t_node *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

t_node	*lstmap(t_node *lst, void *(*f)(void *), void(*del)(void *))
{
	t_node	*res;
	t_node	*tmp;

	if (!lst || !f)
		return (0);
	res = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
