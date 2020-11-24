/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:02:05 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/24 15:07:50 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *cur;

	cur = *lst;
	while (cur)
	{
		temp = cur->next;
		if (del)
			del(cur->content);
		free(cur);
		cur = temp;
	}
	*lst = NULL;
}
