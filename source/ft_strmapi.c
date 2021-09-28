/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:52:21 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 19:52:31 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*rezult;

	rezult = malloc(ft_strlen(s) + 1);
	if (rezult == NULL)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		rezult[index] = f(index, s[index]);
		index++;
	}
	rezult[index] = '\0';
	return (rezult);
}
