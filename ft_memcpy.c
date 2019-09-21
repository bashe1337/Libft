/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:41:09 by bashe             #+#    #+#             */
/*   Updated: 2019/09/21 18:34:35 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*o_dst;
	unsigned char	*o_src;
	size_t			i;

	o_dst = (unsigned char *)dst;
	o_src = (unsigned char *)src;
	i = 0;
	if (dst || src)
	{
		while (i < n)
		{
			o_dst[i] = o_src[i];
			i++;
		}
	}
	return (o_dst);
}
