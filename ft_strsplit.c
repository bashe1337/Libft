/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:07:32 by bashe             #+#    #+#             */
/*   Updated: 2019/09/19 18:03:28 by bashe            ###   ########.fr       */
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
				while (s[i] != c)
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
	int		index;
	int		wordcount;
	int		wordlen;
	int		k;

	index = 0;
	wordlen = ft_wordlen(s, c);
	wordcount = ft_wordcounter(s, c);
	
}
