/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:05:23 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/21 02:20:51 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*new;
	int		size;

	size = count_size(n);
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	new[size--] = '\0';
	if (n == 0)
		return (ft_memcpy(new, "0", 2));
	if (n == -2147483648)
		return (ft_memcpy(new, "-2147483648", 13));
	if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		new[size--] = (n % 10) + '0';
		n /= 10;
	}
	new[size] = n % 10 + '0';
	return (new);
}
