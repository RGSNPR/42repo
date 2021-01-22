/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:40:31 by ksiren            #+#    #+#             */
/*   Updated: 2021/01/22 19:22:05 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list			ap;
	t_fmt			*infa;
	unsigned int	size;

	if (!format)
		return (0);
	va_start(ap, format);
	if (!(infa = malloc(sizeof(t_fmt *))))
	{
		va_end(ap);
		return (0);
	}
	ft_structinit(&infa);
}

int	ft_parser(va_list ap, t_fmt *infa, const char *format)
{
	int i;

	i = 0;
	if (!format)
		return (0);
	if (format[i] == '%')
	{
		inf->str[0]
		if (format[i+1] == '-')
			infa->width = -1;
		else if (format[i+1] == '0')
			infa->nils = 1;
		else if (format[i+1] == '*' || (format[i+1] >= 1 && format[i+1] <= 9))
		{
			while (str[i])
		}
	}
}

void ft_structinit(t_ftm *inf)
{
	inf->str = NULL;
	inf->precision = 0;
	inf->width = 0;
	inf->spec = 0;
	inf->nils = 0;
}

int	ft_setprecision(va_list ap, t_fmt *infa, const char *format)
{
	int i;

	i = 0;
	while (t_fmt->str[i] != '.' || !ft_chrinset(t_fmt->str[i], "cspdiuxX%"))
	{

	}
}
