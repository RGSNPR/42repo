/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:28:27 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/25 17:27:12 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		count_size(char const *s, char c)
{
	int	i;
	int size;

	i = 0;
	size = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] != c)
			i++;
		size++;
		while (s[i] != '\0' && s[i] == c)
			i++;
	}
	return (size);
}

static int		count_leng(char const *s, char c, int i)
{
	int leng;

	leng = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		leng++;
		i++;
	}
	return (leng);
}

static char		**pohudet(char **zhir)
{
	int i;

	i = 0;
	while (zhir[i])
	{
		free(zhir[i]);
		i++;
	}
	free(zhir);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**zhir;

	if (!s)
		return (NULL);
	size = count_size(s, c);
	if (!(zhir = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (size > 0)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (!(zhir[j] = ft_substr(s, i, count_leng(s, c, i))))
			return (pohudet(zhir));
		i += count_leng(s, c, i);
		j++;
		size--;
	}
	zhir[j] = NULL;
	return (zhir);
}
