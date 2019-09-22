/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:07:32 by bashe             #+#    #+#             */
/*   Updated: 2019/09/22 17:23:39 by bashe            ###   ########.fr       */
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

int		ft_wl(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		a;
	int		b;

	i = 0;
	a = 0;
	b = 0;
	str = (char **)malloc(sizeof(char *) * ft_wordcounter(s, c) + 1);
	if (str == NULL || !s)
		return (NULL);
	while (a < ft_wordcounter(s, c))
	{
		b = 0;
		while (s[i] == c && s[i])
			i++;
		if (!(str[a] = (char *)malloc(sizeof(char *) * ft_wl(&s[i], c) + 1)))
			return (NULL);
		while (s[i] != c && s[i])
			str[a][b++] = s[i++];
		str[a][b] = '\0';
		a++;
	}
	str[a] = 0;
	return (str);
}
