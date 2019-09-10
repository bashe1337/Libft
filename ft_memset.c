/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:11:18 by bashe             #+#    #+#             */
/*   Updated: 2019/09/10 19:16:58 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t		i;
	unsigned char *d;

	i = 0;
	d = (unsigned char *) destination;
	while (i < n)
	{
		d[i] = (unsigned char) c;
		i++;
	}
	return (d);
}
