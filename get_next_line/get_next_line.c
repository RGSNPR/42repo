/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:57:37 by ksiren            #+#    #+#             */
/*   Updated: 2020/11/29 15:33:55 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ch1;
	unsigned char	*ch2;

	ch1 = (unsigned char *)src;
	ch2 = (unsigned char *)dst;
	if (src == dst)
		return (ch2);
	if (dst <= src || dst >= (src + len))
	{
		while (len-- > 0)
			*ch2++ = *ch1++;
	}
	else
	{
		ch2 += len - 1;
		ch1 += len - 1;
		while (len > 0)
		{
			*ch2-- = *ch1--;
			len--;
		}
	}
	return (dst);
}

char	*ft_strjoin_mod(char *s1, char *s2)
{
	char	*new;
	size_t	size1;
	size_t	size2;
	size_t	sizer;

	if (!s1 && !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	sizer = size1 + size2;
	if (!(new = (char *)malloc(sizeof(char) * (sizer + 1))))
		return (NULL);
	ft_memmove(new, s1, size1);
	ft_memmove(new + size1, s2, size2);
	new[sizer] = '\0';
	free(s1);
	return (new);
}

int		get_next_line(int fd, char **line)
{
	static char	*ost;
	char		*buf;
	int			rres;

	rres = 1;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (rres != 0 && ft_parse_es(ost) == 0)
	{
		rres = read(fd, buf, BUFFER_SIZE);
		if (rres == -1)
		{
			free(buf);
			return (-1);
		}
		buf[rres] = '\0';
		ost = ft_strjoin_mod(ost, buf);
	}
	*line = ft_newstr(ost);
	ost = ft_cutost(ost);
	free(buf);
	return (!rres ? 0 : 1);
}

#include <stdio.h>
#include <fcntl.h>
int main()
{
	char *line;
	int i;
	int fd = open("test1.txt", O_RDONLY);
	while ((i = get_next_line(fd, &line)))
	{
		printf("i = %d %s\n", i, line);
		free(line);
	}
	printf("i = %d %s\n", i, line);
	free(line);
	return(0);
}
