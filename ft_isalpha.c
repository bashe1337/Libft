/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:12:05 by bashe             #+#    #+#             */
/*   Updated: 2019/09/13 20:36:38 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	unsigned char	isal;

	isal = (unsigned char)c;
	if ((isal >= 'a' && isal <= 'z') || (isal >= 'A' && isal <= 'Z'))
		return (1);
	return (0);
}
