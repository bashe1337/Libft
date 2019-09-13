/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:28:01 by bashe             #+#    #+#             */
/*   Updated: 2019/09/13 18:17:39 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)ch)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)ch)
		return ((char *)&str[i]);
	return (NULL);
}
