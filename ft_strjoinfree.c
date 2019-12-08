/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:10:36 by bashe             #+#    #+#             */
/*   Updated: 2019/12/08 18:29:11 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char const *s1, char const *s2, char *str)
{
	char	*tmp;

	tmp = str;
	str = ft_strjoin(s1, s2);
	ft_strdel(&tmp);
	return (str);
}
