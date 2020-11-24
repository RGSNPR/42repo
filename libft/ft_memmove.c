/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:15:55 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/18 17:46:05 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ch1;
	unsigned char	*ch2;

	ch1 = (unsigned char *)src;
	ch2 = (unsigned char *)dst;
	if (src == dst)
		return (ch2);
	if (dst <= src || dst >= (src + len))
	{
		while (len-- > 0)
			*ch2++ = *ch1++;
	}
	else
	{
		ch2 += len - 1;
		ch1 += len - 1;
		while (len > 0)
		{
			*ch2-- = *ch1--;
			len--;
		}
	}
	return (dst);
}
