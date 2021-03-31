/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:50:42 by jsalmi            #+#    #+#             */
/*   Updated: 2019/10/18 12:56:01 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strremove(char *str, const char *sub)
{
	char *p;
	char *q;
	char *r;
	size_t len;

	if ((q = r = ft_strstr(str, sub)) != NULL)
	{
		len = ft_strlen(sub);
		while ((r = ft_strstr(p = r + len, sub)) != NULL)
		{
			while (p < r)
				*q++ = *p++;
		}
		while ((*q++ = *p++) != '\0')
			continue ;
	}
	return (str);
}
