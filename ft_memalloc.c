/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:06:57 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:05:08 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memalloc(size_t size)
{
	char	*this;

	this = malloc(size);
	if (!this)
	{
		ft_putstr("Malloc broken!\n");
		exit(0);
	}
	ft_memset(this, 0, size);
	return (this);
}
