/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:59:44 by jsalmi            #+#    #+#             */
/*   Updated: 2019/10/28 13:03:08 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int wc;
	int i;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			wc++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (wc);
}

static int	ft_wordlen(char const *str, char c, int x)
{
	int i;

	i = 0;
	while (str[x] != c && str[x])
	{
		x++;
		i++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		x[3];

	x[1] = 0;
	x[0] = 0;
	if (!(arr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (0);
	while (s[x[0]])
	{
		x[2] = 0;
		if (s[x[0]] != c && s[x[0]])
		{
			if (!(arr[x[1]] = (char *)malloc(ft_wordlen(s, c, x[0]) + 1)))
				return (0);
			ft_strncpy(arr[x[1]], (s + x[0]), ft_wordlen(s, c, x[0]));
			x[2] += ft_wordlen(s, c, x[0]);
			x[0] += ft_wordlen(s, c, x[0]);
			arr[x[1]][x[2]] = '\0';
			x[1]++;
		}
		else
			x[0]++;
	}
	arr[x[1]] = 0;
	return (arr);
}
// static int		ft_nbw(const char *str, char c)
// {
// 	int word;

// 	word = 0;
// 	if (*str != c && *str)
// 	{
// 		str++;
// 		word++;
// 	}
// 	while (*str)
// 	{
// 		while (*str == c)
// 		{
// 			str++;
// 			if (*str != c && *str)
// 				word++;
// 		}
// 		str++;
// 	}
// 	return (word);
// }

// static int		ft_ln(const char *str, char c)
// {
// 	int count;

// 	count = 0;
// 	while (*str != c && *str)
// 	{
// 		count++;
// 		str++;
// 	}
// 	return (count);
// }

// char			**ft_strsplit(char const *s, char c)
// {
// 	int		j;
// 	int		i;
// 	char	**spt;

// 	j = 0;
// 	i = 0;
// 	if (!s || (!(spt = (char **)malloc(sizeof(char *) * (ft_nbw(s, c) + 1)))))
// 		return (NULL);
// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		if (*s != c && *s)
// 		{
// 			if (!(spt[j] = (char *)malloc(sizeof(char) * (ft_ln(s, c) + 1))))
// 				return (NULL);
// 			while (*s && *s != c)
// 				spt[j][i++] = (char)*s++;
// 			spt[j][i] = '\0';
// 			j++;
// 			i = 0;
// 		}
// 	}
// 	spt[j] = NULL;
// 	return (spt);
// }
