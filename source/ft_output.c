/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:47:40 by ssantiag          #+#    #+#             */
/*   Updated: 2021/07/11 14:47:40 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_internals.h"

void	out_char(char c, t_out_params *outp)
{
	outp->buffer[outp->count % BUFFER_SIZE] = c;
	outp->count++;
	if (outp->count != 0 && outp->count % BUFFER_SIZE == 0)
		write(STDOUT_FILENO, outp->buffer, BUFFER_SIZE);
}

void	out_str(const char *str, t_out_params *outp)
{
	while (*str != 0)
		out_char(*str++, outp);
}

void	flush_buffer(t_out_params *outp)
{
	write(STDOUT_FILENO, outp->buffer, outp->count % BUFFER_SIZE);
}
