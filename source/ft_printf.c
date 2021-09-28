/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:10:40 by ssantiag          #+#    #+#             */
/*   Updated: 2021/07/10 14:10:40 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_internals.h"

static struct s_arg_handler {
	char	type;
	void	(*handler)(va_list, t_out_params *);
} arg_handlers[] = {
	{'c', c_handler},
	{'s', s_handler},
	{'p', p_handler},
	{'d', di_handler},
	{'i', di_handler},
	{'u', u_handler},
	{'x', x_handler},
	{'X', uppx_handler},
	{'\0', NULL}
};

const char	*parse_args(const char *format, va_list va, t_out_params *outp)
{
	struct s_arg_handler	*hadler_ptr;

	hadler_ptr = arg_handlers;
	if (*format == '%')
	{
		out_char('%', outp);
		return (format + 1);
	}
	while (hadler_ptr->handler != NULL)
	{
		if (hadler_ptr->type == *format)
		{
			hadler_ptr->handler(va, outp);
			return (format + 1);
		}
		hadler_ptr++;
	}
	out_char(*format, outp);
	return (format + 1);
}

int	ft_vsprintf(const char *format, va_list va)
{
	t_out_params	outp;

	outp.count = 0;
	while (*format != 0)
	{
		if (*format == '%')
			format = parse_args(format + 1, va, &outp);
		else
			out_char(*format++, &outp);
	}
	flush_buffer(&outp);
	return (outp.count);
}

int	ft_printf(const char *format, ...)
{
	int			output_count;
	va_list		va;

	va_start(va, format);
	output_count = ft_vsprintf(format, va);
	va_end(va);
	return (output_count);
}
