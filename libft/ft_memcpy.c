/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:40:41 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/18 17:50:39 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ch1;
	unsigned char	*ch2;

	ch1 = (unsigned char *)src;
	ch2 = (unsigned char *)dst;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		ch2[n - 1] = ch1[n - 1];
		n--;
	}
	return (dst);
}
