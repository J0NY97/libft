/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:56:00 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:47:37 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*holder;

	holder = (t_list *)ft_memalloc(sizeof(t_list));
	newlst = (t_list *)ft_memalloc(sizeof(t_list));
	newlst = f(lst);
	holder = newlst;
	lst = lst->next;
	while (lst)
	{
		newlst->next = f(lst);
		newlst = newlst->next;
		lst = lst->next;
	}
	return (holder);
}
