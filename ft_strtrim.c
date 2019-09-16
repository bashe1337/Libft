/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:03:17 by bashe             #+#    #+#             */
/*   Updated: 2019/09/16 21:35:46 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int			i;
	int			psize;
	char		*str;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	psize = i;
	while (s[psize])
		psize++;
	if (psize > 0)
	{
		psize--;
		while (s[psize] == ' ' || s[psize] == '\n' || s[psize] == '\t'
		|| psize >= 0)
			psize--;
		psize++;
	}
	psize = psize - i;
	str = (char *)malloc(sizeof(char) + psize);
	str = ft_strncpy(str, &s[i], psize);
	str[psize] = 0;
	return (str);
}
