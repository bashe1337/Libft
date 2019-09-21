/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:49:04 by bashe             #+#    #+#             */
/*   Updated: 2019/09/21 20:03:06 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	size_t			i;

	str = NULL;
	i = 0;
	if (size > 0)
	{
		str = (unsigned char *)malloc(size);
		if (str == NULL)
			return (NULL);
		while (i <= size)
		{
			str[i] = 0;
			i++;
		}
	}
	return ((void *)str);
}
