/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:33:28 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/18 17:45:45 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ch1;
	unsigned char	*ch2;
	size_t			i;

	ch1 = (unsigned char *)src;
	ch2 = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		if (ch1[i] == (unsigned char)c)
		{
			ch2[i] = ch1[i];
			i++;
			return ((void *)(ch2 + i));
		}
		ch2[i] = ch1[i];
		i++;
	}
	return (NULL);
}
