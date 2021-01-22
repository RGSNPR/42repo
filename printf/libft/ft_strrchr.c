/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:01:03 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/18 17:46:48 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*ptr;
	size_t		i;

	ptr = (char *)s;
	i = ft_strlen(s);
	ptr += i - 1;
	if ((char)c == '\0')
		return (ptr + 1);
	while (i > 0)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr--;
		i--;
	}
	return (NULL);
}
