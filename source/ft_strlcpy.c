/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:41:43 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 15:41:43 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *source, size_t size)
{
	size_t	source_len;
	size_t	copy_len;

	if (source == NULL)
		return (0);
	source_len = ft_strlen(source);
	if (size == 0)
		return (source_len);
	copy_len = source_len;
	if (source_len >= size)
		copy_len = size - 1;
	ft_memcpy(dst, source, copy_len);
	dst[copy_len] = '\0';
	return (source_len);
}
