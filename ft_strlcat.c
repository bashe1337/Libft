/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:20:25 by bashe             #+#    #+#             */
/*   Updated: 2019/09/14 20:29:58 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	size = ft_strlen(dst);
	count = size + ft_strlen(src);
	while (src[i])
	{
		dst[size] = src[i];
		i++;
		size++;
	}
	dst[count] = '\0';
	return (count);
}
