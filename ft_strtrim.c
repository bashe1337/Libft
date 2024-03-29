/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:03:17 by bashe             #+#    #+#             */
/*   Updated: 2019/09/23 18:28:29 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		printsize;
	int		j;

	i = 0;
	j = 0;
	str = 0;
	if (s)
	{
		while (ft_iswspace(s[i]) && s[i] != '\0')
			i++;
		printsize = ft_printsize(&s[i]);
		str = (char *)malloc(sizeof(char) * (printsize + 2));
		if (str == NULL)
			return (NULL);
		while (j <= printsize)
		{
			str[j] = s[i];
			i++;
			j++;
		}
		str[j] = 0;
	}
	return (str);
}
