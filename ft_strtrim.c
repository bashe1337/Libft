/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:03:17 by bashe             #+#    #+#             */
/*   Updated: 2019/09/17 19:01:50 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswspace(char const a)
{
	if (a == '\t' || a == ' ' || a == '\n')
		return (1);
	return (0);
}

int		ft_printsize(char const *s)
{
	int		i;

	i = 0;
	while (s[i + 1])
		i++;
	while (ft_iswspace(s[i]) && i > 0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		printsize;
	int		j;

	i = 0;
	j = 0;
	while (ft_iswspace(s[i]) && s[i] != '\0')
		i++;
	printsize = ft_printsize(&s[i]);
	str = (char *)malloc(sizeof(char) * printsize + 1);
	while (j <= printsize)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}
