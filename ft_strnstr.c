/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:33:12 by bashe             #+#    #+#             */
/*   Updated: 2019/09/23 18:21:34 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n[i] == 0)
		return ((char *)&h[i]);
	while (i < len && h[i])
	{
		if (h[i] == n[j])
		{
			if ((len - i) < ft_strlen(n))
				return (NULL);
			if (ft_secondcmp(&h[i], n) == 0)
				return ((char *)&h[i]);
		}
		i++;
	}
	return (NULL);
}
