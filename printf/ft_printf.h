/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:48:06 by ksiren            #+#    #+#             */
/*   Updated: 2021/01/22 17:03:40 by ksiren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_fmt
{
	char	*str;
	char	spec;
	int		nils;
	int		precision;
	int		width;
}				t_fmt;



# define BASE_DEC "0123456789"
# define BASE_HEX_LOW "0123456789abcdef"
# define BASE_HEX_HIGH "0123456789ABCDEF"

#endif
