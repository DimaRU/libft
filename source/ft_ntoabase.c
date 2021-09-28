/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 21:35:52 by ssantiag          #+#    #+#             */
/*   Updated: 2021/07/11 21:35:52 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_internals.h"

void	ft_ntoa_base(ssize_t n, int base, int flags, t_out_params *outp)
{
	static char	digits[] = "0123456789abcdef";
	static char	digitsu[] = "0123456789ABCDEF";
	int			sign;
	char		*buffer_ptr;
	char		buffer[66];

	sign = 1;
	if ((flags | FL_SIGN) && n < 0)
		sign = -1;
	buffer_ptr = buffer + sizeof(buffer);
	*(--buffer_ptr) = '\0';
	while (true)
	{
		if (flags & FL_UPPER)
			*(--buffer_ptr) = digitsu[sign * (n % base)];
		else
			*(--buffer_ptr) = digits[sign * (n % base)];
		n /= base;
		if (n == 0)
			break ;
	}
	if (sign < 0)
		*(--buffer_ptr) = '-';
	out_str(buffer_ptr, outp);
}
