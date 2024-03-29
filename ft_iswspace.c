/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:27:37 by bashe             #+#    #+#             */
/*   Updated: 2019/09/23 18:27:40 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswspace(char const a)
{
	if (a == '\t' || a == ' ' || a == '\n')
		return (1);
	return (0);
}
