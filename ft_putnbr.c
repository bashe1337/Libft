/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:34:46 by bashe             #+#    #+#             */
/*   Updated: 2019/09/17 19:54:05 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	i;
	long int	b;

	i = 1;
	b = n;
	if (n == 0)
		ft_putchar('0');
	else if (b < 0)
	{
		ft_putchar('-');
		b = b * (-1);
	}
	n = b;
	while (n != 0)
	{
		n = n / 10;
		i = i * 10;
	}
	while (b != 0)
	{
		i = i / 10;
		n = b / i + '0';
		b = b % i;
		ft_putchar(n);
	}
}
