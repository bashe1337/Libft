/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:20:25 by bashe             #+#    #+#             */
/*   Updated: 2019/09/17 20:27:10 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	count = j + ft_strlen(dst);
	while (src[i])
	{
		dst[size] = src[i];
		i++;
		size++;
	}
	dst[count] = '\0';
	return (count);
}
