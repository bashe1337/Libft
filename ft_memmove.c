/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:14:14 by bashe             #+#    #+#             */
/*   Updated: 2019/09/21 18:37:08 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst || src)
	{
		if (s < d)
		{
			while (len-- > 0)
				d[len] = s[len];
		}
		else
		{
			while (i < len)
			{
				d[i] = s[i];
				i++;
			}
		}
	}
	return (d);
}
