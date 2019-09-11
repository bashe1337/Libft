/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:50:56 by bashe             #+#    #+#             */
/*   Updated: 2019/09/11 19:05:10 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		m;

	i = 0;
	r = 0;
	m = 1;
	while ((str[i] >= 9 && str[i] <= 12) || str[i] == 32 || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		m = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			r = r * 10 + (str[i] - 48);
		else
			break ;
		i++;
	}
	return (r * m);
}
