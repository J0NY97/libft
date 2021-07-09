/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:31:50 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/07 08:35:44 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_atoi(const char *str)
{
	int	fin;
	int	i;
	int	neg;

	fin = 0;
	i = 0;
	neg = 1;
	if (!*str)
		return (0);
	while (!ft_isprint(str[i]) || str[i] == ' ' || str[i] == '+'
		|| str[i] == '-')
	{
		if (str[i] == '+' || str[i] == 27)
			if (str[i + 1] == '-' || str[i + 1] == '+' || str[i] == 27)
				return (0);
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		fin = fin * 10 + (str[i] - '0');
		i++;
	}
	return (fin * neg);
}
