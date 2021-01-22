/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:07:51 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/18 17:45:59 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ch1;
	unsigned char	*ch2;
	size_t			len;

	ch1 = (unsigned char *)s1;
	ch2 = (unsigned char *)s2;
	len = 0;
	while (len < n)
	{
		if (ch1[len] != ch2[len])
			return (ch1[len] - ch2[len]);
		len++;
	}
	return (0);
}
