/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:53:39 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/05 17:53:39 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	t_uchar;

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const t_uchar	*str1;
	const t_uchar	*str2;

	str1 = s1;
	str2 = s2;
	while (n-- > 0)
	{
		if (*str1++ != *str2++)
			return (str1[-1] - str2[-1]);
	}
	return (0);
}
