/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:57:37 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/03 15:57:37 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	alloc;
	void	*rezult;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	alloc = nmemb * size;
	if (alloc / size != nmemb)
		return (NULL);
	rezult = malloc(alloc);
	if (rezult != NULL)
		ft_bzero(rezult, alloc);
	return (rezult);
}
