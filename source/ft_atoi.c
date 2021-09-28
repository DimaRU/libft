/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:54:01 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 14:54:01 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static bool	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(const char *str)
{
	long	rezult;
	long	prev_rezult;
	int		sign;

	sign = 1;
	rezult = 0;
	while (ft_isspace(*str) && *str != '\0')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (ft_isdigit(*str))
	{
		prev_rezult = rezult;
		rezult = rezult * 10 + sign * (*str++ - '0');
		if (sign == -1 && rezult > prev_rezult)
			return ((int)LONG_MIN);
		else if (sign == 1 && rezult < prev_rezult)
			return ((int)LONG_MAX);
	}
	return ((int)rezult);
}
