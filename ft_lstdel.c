/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:24:24 by jsalmi            #+#    #+#             */
/*   Updated: 2021/05/12 13:09:53 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	/*
	t_list *temp;

	if (!*alst)
		return ;
	while ((*alst)->next != NULL)
	{
		temp = (*alst)->next;
		ft_lstdelone(&*alst, del);
		*alst = temp;
	}
	ft_lstdelone(&*alst, del);
	*alst = NULL;
	*/
	t_list	*tmp;
	t_list	*nxt;

	tmp = *alst;
	if (alst == NULL)
		return ;
	while (tmp != NULL)
	{
		nxt = tmp->next;
		ft_lstdelone(&tmp, del);
		tmp = nxt;
	}
	*alst = NULL;
}

