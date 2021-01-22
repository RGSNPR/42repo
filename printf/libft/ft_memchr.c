/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:47:07 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/18 17:45:55 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ch1;
	size_t			len;

	ch1 = (unsigned char *)s;
	len = 0;
	while (len < n)
	{
		if (*ch1 == ((unsigned char)c))
			return (ch1);
		len++;
		ch1++;
	}
	return (NULL);
}
