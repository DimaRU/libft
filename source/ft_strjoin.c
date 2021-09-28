/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:32:34 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 10:32:34 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*rezult;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	rezult = malloc(len1 + len2 + 1);
	if (rezult == NULL)
		return (NULL);
	ft_memcpy(rezult, s1, len1);
	ft_memcpy(rezult + len1, s2, len2);
	rezult[len1 + len2] = '\0';
	return (rezult);
}
