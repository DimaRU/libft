/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 08:55:47 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 08:55:47 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	t_uchar;

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_uchar			*dest;
	const t_uchar	*source;

	dest = dst;
	source = src;
	if (src > dst)
	{
		while (len-- > 0)
			*dest++ = *source++;
	}
	else if (src < dst)
	{
		dest += len - 1;
		source += len - 1;
		while (len-- > 0)
			*dest-- = *source--;
	}
	return (dst);
}
