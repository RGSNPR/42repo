/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:14:33 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/24 16:53:33 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*malloc_term(void)
{
	char	*dest2;

	dest2 = malloc(sizeof(char) * 1);
	if (dest2 == NULL)
		return (NULL);
	dest2[0] = '\0';
	return (dest2);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int			num;
	int			count;
	char		*new;

	if (!s1 || !set)
		return ((char *)s1);
	count = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (malloc_term());
	if (ft_strlen(set) == 0)
		return ((char *)s1);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		count--;
	}
	if (!s1 || count == 0)
		return (malloc_term());
	num = ft_strlen(s1);
	while (num && ft_strchr(set, s1[num]))
		num--;
	new = ft_substr((char *)s1, 0, num + 1);
	return (new);
}
