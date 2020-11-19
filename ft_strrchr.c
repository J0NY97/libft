/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:29:13 by jsalmi            #+#    #+#             */
/*   Updated: 2019/10/26 14:02:26 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*strstr;

	strstr = (char *)str;
	i = ft_strlen(strstr);
	//i = ft_strlen(str);
	while (i >= 0)
	{
		if (strstr[i] == (char)c)
			return (&strstr[i]);
		// if (str[i] == (char)c)
		// 	return ((char *)&str[i]);
		i--;
	}
	return (0);
}
