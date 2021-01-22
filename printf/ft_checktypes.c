/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktypes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:06:55 by ksiren            #+#    #+#             */
/*   Updated: 2021/01/22 15:59:17 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chrinset(int c, char *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	ft_isspec(int c)
{
	if (rl_chrinset(c, "cspdiuxX%"))
		return (1);
	return (0);
}

int	ft_isflag(int c)
{
	if (rl_chrinset(c, "-0 "))
		return (1);
	return (0);
}
