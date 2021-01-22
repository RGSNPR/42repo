/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:38:09 by ksiren            #+#    #+#             */
/*   Updated: 2021/01/22 15:59:12 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_converts(va_list *ap, char c, t_infos *inf)
{
	inf->spec = c;
	if (c == 'c')
		return ;
	else if (c == 's')
		inf->str = ft_strdup(va_arg(*ap, char *));
	else if (c == 'i' || c == 'd')
		inf->str = ft_itoa(va_arg(*ap, int));
	else if (c == 'u')
		inf->str = rl_utoa(va_arg(*ap, unsigned int), BASE_DEC);
	else if (c == 'x')
		inf->str = rl_utoa(va_arg(*ap, unsigned int), BASE_HEX_LOW);
	else if (c == 'X')
		inf->str = rl_utoa(va_arg(*ap, unsigned int), BASE_HEX_HIGH);
	else if (c == '%')
		inf->str = ft_strdup("%");
	else if (c == 'p')
		inf->str = rl_utoa(va_arg(*ap, unsigned long), BASE_HEX_LOW);
	rl_flagselect(inf);
}
