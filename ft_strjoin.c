/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:48:52 by bashe             #+#    #+#             */
/*   Updated: 2019/09/21 20:36:24 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	count;
	int		i;
	int		j;

	i = 0;
	count = 0;
	j = 0;
	str = 0;
	if (s1 && s2)
	{
		count = ft_strlen(s1) + ft_strlen(s2);
		j = ft_strlen(s1);
		i = 0;
		str = (char *)malloc(sizeof(char) * count + 1);
		if (str == NULL)
			return (NULL);
		str = ft_strcpy(str, s1);
		while (s2[i])
			str[j++] = s2[i++];
		str[j] = 0;
	}
	return (str);
}
