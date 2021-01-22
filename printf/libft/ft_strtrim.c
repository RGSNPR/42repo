/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:14:33 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/25 17:29:37 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, *(s1 + start)))
		start++;
	while (start < end && ft_strchr(set, *(s1 + end - 1)))
		end--;
	return (ft_substr(s1, start, end - start));
}
