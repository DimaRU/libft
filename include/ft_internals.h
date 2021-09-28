/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_internals.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:27:50 by ssantiag          #+#    #+#             */
/*   Updated: 2021/07/11 13:27:50 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INTERNALS_H
# define FT_INTERNALS_H

# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

# define BUFFER_SIZE 50
# define FL_SIGN (1)
# define FL_UPPER (2)

typedef struct s_out_params {
	int		count;
	char	buffer[BUFFER_SIZE];
}	t_out_params;

void	out_char(char c, t_out_params *outp);
void	out_str(const char *str, t_out_params *outp);
void	flush_buffer(t_out_params *outp);
void	c_handler(va_list va, t_out_params *outp);
void	s_handler(va_list va, t_out_params *outp);
void	p_handler(va_list va, t_out_params *outp);
void	di_handler(va_list va, t_out_params *outp);
void	u_handler(va_list va, t_out_params *outp);
void	o_handler(va_list va, t_out_params *outp);
void	x_handler(va_list va, t_out_params *outp);
void	uppx_handler(va_list va, t_out_params *outp);
void	ft_ntoa_base(long n, int base, int flags, t_out_params *outp);

#endif
