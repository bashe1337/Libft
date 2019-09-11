/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:02:11 by bashe             #+#    #+#             */
/*   Updated: 2019/09/11 21:15:11 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *app)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (app[j])
	{
		dst[i] = app[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
