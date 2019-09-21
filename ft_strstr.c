/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:44:34 by bashe             #+#    #+#             */
/*   Updated: 2019/09/21 18:19:25 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			if (ft_secondcmp(&haystack[i], needle) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
