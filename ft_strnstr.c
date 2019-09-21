/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:33:12 by bashe             #+#    #+#             */
/*   Updated: 2019/09/21 18:19:31 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == 0)
		return ((char *)&haystack[i]);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			if ((len - i) < ft_strlen(needle))
				return (NULL);
			if (ft_secondcmp(&haystack[i], needle) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
