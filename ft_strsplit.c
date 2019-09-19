/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:07:32 by bashe             #+#    #+#             */
/*   Updated: 2019/09/19 21:11:28 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcounter(char const *s, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			n++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (n);
}

int		ft_wordlen(char const *s, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			n++;
			i++;
		}
	}
	return (n);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		first;
	int		second;

	i = 0;
	first = 0;
	second = 0;
	str = (char **)malloc(sizeof(char) * ft_wordcounter(s, c) + 1);
	if (!s || str == NULL)
		return (NULL);
	while (i < ft_wordcounter(s, c))
	{
		if (s[i] == c)
			i++;
		else
		{
			second = 0;
			*str = (char *)malloc(sizeof(char) * ft_wordlen(&s[i], c) + 1);
			if (str == NULL)
				return (NULL);
			while (second < ft_wordlen(&s[i], c))
			{
				str[first][second] = s[i];
				i++;
				second++;
			}
			str[first][second] = '\0';
			first++;
		}
	}
	str[first] = NULL;
	return (str);
}
