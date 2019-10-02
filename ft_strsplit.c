/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:07:32 by bashe             #+#    #+#             */
/*   Updated: 2019/09/23 19:42:03 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		a;
	int		b;

	i = 0;
	a = 0;
	b = 0;
	if (!s || !c ||
	!(str = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1))))
		return (NULL);
	while (a < ft_wordcounter(s, c))
	{
		b = 0;
		while (s[i] == c && s[i])
			i++;
		if (!(str[a] = (char *)malloc(sizeof(char) * ft_wl(&s[i], c) + 1)))
			return (NULL);
		while (s[i] != c && s[i])
			str[a][b++] = s[i++];
		str[a][b] = '\0';
		a++;
	}
	str[a] = 0;
	return (str);
}
