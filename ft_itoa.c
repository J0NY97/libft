/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:02:02 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:45:46 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_itoa(int n)
{
	int		nbrcount;
	int		i;
	char	*str;

	i = 0;
	nbrcount = ft_nbrlen(n);
	str = ft_strnew(nbrcount);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		n *= -1;
		str[nbrcount - 1] = '-';
		nbrcount--;
	}
	while (nbrcount > 0)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
		nbrcount--;
	}
	ft_reverse(str);
	return (str);
}
