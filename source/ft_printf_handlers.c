/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_handlers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:46:24 by ssantiag          #+#    #+#             */
/*   Updated: 2021/09/28 17:46:24 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_internals.h"

void	c_handler(va_list va, t_out_params *outp)
{
	char	c;

	c = va_arg(va, int);
	out_char(c, outp);
}

void	s_handler(va_list va, t_out_params *outp)
{
	char	*str;

	str = va_arg(va, char *);
	if (str == NULL)
		out_str("(null)", outp);
	else
		out_str(str, outp);
}

void	p_handler(va_list va, t_out_params *outp)
{
	ssize_t	number;

	out_str("0x", outp);
	number = va_arg(va, size_t);
	ft_ntoa_base(number, 16, 0, outp);
}

void	di_handler(va_list va, t_out_params *outp)
{
	int	number;

	number = va_arg(va, int);
	ft_ntoa_base(number, 10, FL_SIGN, outp);
}

void	u_handler(va_list va, t_out_params *outp)
{
	unsigned int	number;

	number = va_arg(va, unsigned int);
	ft_ntoa_base((unsigned long)number, 10, 0, outp);
}
