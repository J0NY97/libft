/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:44:26 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:46:46 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	node = ft_memalloc(sizeof(t_list));
	if (!node)
		return (NULL);
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		node->content = ft_memalloc(content_size);
		node->content = ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
*/
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)ft_memalloc(sizeof(*new));
	if (!new)
		return (0);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->content = malloc(content_size);
	if (!new->content)
		return (0);
	ft_memmove(new->content, content, content_size);
	new->content_size = content_size;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
