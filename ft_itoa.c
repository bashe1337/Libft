/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:51:08 by bashe             #+#    #+#             */
/*   Updated: 2019/09/18 18:38:41 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sizencount(int n)
{
	int			i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	b;
	long int	zer;
	int			count;

	i = 0;
	b = n;
	zer = 1;
	count = ft_sizencount(n);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (n == 0)
	{
		str[i] = '0';
		count--;
		i++;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
		count--;
		b = b * (-1);
	}
	n = b;
	while (n != 0)
	{
		n = n / 10;
		zer = zer * 10;
	}
	while (count != 0)
	{
		zer = zer / 10;
		n = b / zer + '0';
		b = b % zer;
		str[i] = (char)n;
		i++;
		count--;
	}
	str[i] = 0;
	return (str);
}
