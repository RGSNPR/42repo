/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:13:16 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/25 17:49:53 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			len;

	len = 0;
	if (n == 0)
		return (0);
	while (len < n - 1 && s1[len] != '\0' && s2[len] == s1[len])
		len++;
	return ((unsigned char)s1[len] - (unsigned char)s2[len]);
}
