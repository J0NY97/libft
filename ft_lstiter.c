/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:49:47 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:47:55 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*temp;

	while (lst->next != NULL)
	{
		temp = lst->next;
		f(lst);
		lst = temp;
	}
	f(lst);
}
