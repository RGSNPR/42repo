/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:15:28 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/24 20:23:02 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*malloc_term(void)
{
	char	*dest2;

	dest2 = malloc(sizeof(char) * 1);
	if (dest2 == NULL)
		return (NULL);
	dest2[0] = '\0';
	return (dest2);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	num;

	if (!s)
		return (NULL);
	num = ft_strlen(s);
	if ((size_t)start >= num)
		return (malloc_term());
	if ((num - (size_t)start) < len)
		len = (num - (size_t)start);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
