/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:58:34 by bashe             #+#    #+#             */
/*   Updated: 2019/09/23 18:41:25 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ar;
	t_list	*ar_next;

	ar = *alst;
	while (ar)
	{
		ar_next = ar->next;
		del(ar->content, ar->content_size);
		free(ar);
		ar = ar_next;
	}
	*alst = NULL;
}
