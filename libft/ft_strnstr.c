/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:53:16 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/21 00:54:16 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	s;
	char	*hay;
	char	*ret;

	hay = (char *)haystack;
	ret = (char *)needle;
	s = 0;
	if (!*needle)
		return (hay);
	while (hay[s] != '\0' && s < len)
	{
		i = 0;
		if (hay[s] == ret[i])
		{
			while (ret[i] != '\0' && i + s < len && ret[i] == hay[s + i])
				i++;
			if (ret[i] == '\0')
				return (&hay[s]);
		}
		s++;
	}
	return (NULL);
}
