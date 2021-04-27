/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:40:54 by jsalmi            #+#    #+#             */
/*   Updated: 2019/10/26 15:08:25 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strtrim(char const *s)
{
	int		x;
	int		y;
	int		temp;
	char	*asd;

	x = 0;
	y = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	temp = x;
	if (s[x] != '\0')
	{
		x = ft_strlen(s);
		y = x - temp;
		x--;
	}
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
	{
		y--;
		x--;
	}
	if (!(asd = ft_strnew(y)))
		return (0);
	ft_strncpy(asd, (s + temp), y);
	return (asd);
}
