/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:32:40 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 10:32:40 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char c, char const *set)
{
	if (set == NULL)
		return (0);
	while (*set != '\0')
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rezult;
	char	*end;

	if (s1 == NULL)
		return (NULL);
	while (*s1 != '\0' && contains(*s1, set))
		s1++;
	end = (char *)s1 + ft_strlen(s1);
	while (end > s1 && contains(end[-1], set))
		end--;
	rezult = malloc(end - s1 + 1);
	if (rezult == NULL)
		return (NULL);
	ft_memcpy(rezult, s1, end - s1);
	rezult[end - s1] = '\0';
	return (rezult);
}
