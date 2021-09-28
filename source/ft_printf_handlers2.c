/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_handlers2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:59:29 by ssantiag          #+#    #+#             */
/*   Updated: 2021/09/28 17:59:29 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_internals.h"

void	x_handler(va_list va, t_out_params *outp)
{
	unsigned int	number;

	number = va_arg(va, unsigned int);
	ft_ntoa_base((unsigned long)number, 16, 0, outp);
}

void	uppx_handler(va_list va, t_out_params *outp)
{
	unsigned int	number;

	number = va_arg(va, unsigned int);
	ft_ntoa_base((unsigned long)number, 16, FL_UPPER, outp);
}
