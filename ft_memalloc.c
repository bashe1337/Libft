/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:49:04 by bashe             #+#    #+#             */
/*   Updated: 2019/09/15 19:08:01 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;

	str = NULL;
	if (size > 0)
	{
		str = (unsigned char *)malloc(size);
		if (str == NULL)
			return (NULL);
		while (size > 0)
		{
			str[size] = 0;
			size--;
		}
	}
	return ((void *)str);
}
