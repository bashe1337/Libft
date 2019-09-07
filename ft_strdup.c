/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:48:40 by bashe             #+#    #+#             */
/*   Updated: 2019/09/07 16:33:30 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int			i;
	char		*str;
	int			count;

	i = 0;
	count = ft_strlen(src);
	str = malloc(sizeof(char) * count);
	if (str == NULL)
		return (NULL);
	while (i < count)
	{
		str[i] = src[i];
		i++;
	}
	str[i + 1] = '\0';
	return (str);
}
