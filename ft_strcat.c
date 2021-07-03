/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:19:06 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:00:09 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	k;

	i = 0;
	k = ft_strlen(dest);
	while (src[i])
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[i + k] = '\0';
	return (dest);
}
