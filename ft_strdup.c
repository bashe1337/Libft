/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:48:40 by bashe             #+#    #+#             */
/*   Updated: 2019/09/13 18:30:35 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int			i;
	char		*str;
	int			count;

	i = 0;
	count = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	while (i < count)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
