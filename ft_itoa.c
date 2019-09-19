/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:51:08 by bashe             #+#    #+#             */
/*   Updated: 2019/09/19 21:34:09 by bashe            ###   ########.fr       */
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
	int			count;

	i = 0;
	count = ft_sizencount(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (NULL);
	str[count] = 0;
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
		n = n * (-1);
	}
	while (count > i)
	{
		count--;
		str[count] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
