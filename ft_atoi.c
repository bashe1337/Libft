/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:50:56 by bashe             #+#    #+#             */
/*   Updated: 2019/09/22 19:16:38 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	long int		r;
	long int		nb;
	int				m;

	i = 0;
	r = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 12) || str[i] == 32 || str[i] == '\r')
		i++;
	m = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10 + (str[i] - 48);
		if (nb > r && m < 0)
			return (0);
		else if (nb > r && m > 0)
			return (-1);
		nb = r;
		i++;
	}
	return ((int)(r * m));
}
