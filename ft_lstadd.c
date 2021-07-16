/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:40:22 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/15 13:06:06 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	*alst = new;
	(*alst)->next = temp;
}
*/
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new || !alst)
	{
		ft_putstr("[ft_lstadd] No args\n");
		return ;
	}
	if (!(*alst))
	{
		(*alst) = new;
		(*alst)->next = NULL;
		(*alst)->prev = NULL;
	}
	else
	{
		new->next = (*alst);
		new->prev = NULL;
		(*alst)->prev = new;
		(*alst) = new;
	}
}
