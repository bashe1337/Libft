/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:03:17 by bashe             #+#    #+#             */
/*   Updated: 2019/09/17 18:02:36 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswspace(char a)
{
	if (a == '\t' || a == ' ' || a == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		printsize;

	i = 0;
	while (ft_iswspace(s[i]) == 1 && s[i] != '\0')
		i++;
	printsize = 0;
	while (s[printsize])
		printsize++;
	while (ft_iswspace(s[printsize]) == 1 && printsize >= 0)
		printsize--;
	printsize++;
	printsize = printsize - i + 1;
	str = (char *)malloc(sizeof(char) * printsize);
	if (str == NULL)
		return (NULL);
	str[printsize] = 0;
	printsize--;
	while (printsize >= i)
	{
		str[printsize] = s[printsize];
		printsize--;
	}
	return (str);
}
