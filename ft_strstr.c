/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:44:34 by bashe             #+#    #+#             */
/*   Updated: 2019/09/13 19:32:32 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_mycmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[i] == 0)
		return ((char *)&haystack[i]);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			if (ft_mycmp(&haystack[i], needle) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
