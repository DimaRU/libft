/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:33:53 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 10:33:53 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	copy_len;
	char	*rezult;

	if (s == NULL)
		return (NULL);
	copy_len = ft_strlen(s);
	if (start >= copy_len)
		copy_len = 0;
	else if (copy_len + start > len)
		copy_len = len;
	else
		copy_len -= start;
	rezult = malloc(copy_len + 1);
	if (rezult == NULL)
		return (NULL);
	ft_memcpy(rezult, s + start, copy_len);
	rezult[copy_len] = '\0';
	return (rezult);
}
