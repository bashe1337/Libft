/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:33:12 by bashe             #+#    #+#             */
/*   Updated: 2019/09/26 16:07:26 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;
	long int	b;

	i = 1;
	b = n;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b = b * (-1);
	}
	n = b;
	while (n != 0)
	{
		n = n / 10;
		i = i * 10;
	}
	while ((i / 10) != 0)
	{
		i = i / 10;
		n = b / i + '0';
		b = b % i;
		ft_putchar_fd(n, fd);
	}
}
