/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:00:49 by jsalmi            #+#    #+#             */
/*   Updated: 2021/07/03 09:01:33 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_clamp(int value, int min, int max)
{
	if (value < min)
		return (min);
	else if (value > max)
		return (max);
	return (value);
}
