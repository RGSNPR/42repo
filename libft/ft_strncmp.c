/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:13:16 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/24 20:17:14 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			len;

	printf("%lu\n", sizeof(s1));
	len = 0;
	if (n == 0)
		return (0);
	while (len < n - 1 && s1[len] != '\0' && s2[len] == s1[len])
		len++;
	return ((unsigned char)s1[len] - (unsigned char)s2[len]);
}

int main()
{
	const char  s1[]= "1234";
	const char s2[]= "abcd";
		ft_strncmp(s1, s2, 5);
}