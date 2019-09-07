/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:19:38 by bashe             #+#    #+#             */
/*   Updated: 2019/09/07 20:02:04 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *app, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	while (i < len && app[i])
	{
		dst[j] = app[i];
		i++;
		j++;
	}
	return (dst);
}
