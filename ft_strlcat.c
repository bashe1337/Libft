/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:20:25 by bashe             #+#    #+#             */
/*   Updated: 2019/09/19 20:02:07 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	j = ft_strlen(dst);
	while (src[i] && j < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (j == size && j != len)
		j--;
	dst[j] = '\0';
	return (len + ft_strlen(src));
}
