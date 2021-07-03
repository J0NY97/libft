/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:18:10 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:46:05 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*asdf;

	asdf = (char *)str;
	while (0 != n)
	{
		if (*asdf == (char)c)
			return ((void *)asdf);
		asdf++;
		n--;
	}
	return (0);
}
