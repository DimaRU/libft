/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 09:37:50 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 09:37:50 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	t_uchar;

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_uchar	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		if (*ptr++ == (t_uchar) c)
			return ((void *)(ptr - 1));
	}
	return (NULL);
}
