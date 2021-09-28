/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:08:31 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 11:08:31 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	substring_length(const char *str, char separator)
{
	const char	*ptr;

	ptr = str;
	while (*ptr != separator && *ptr != '\0')
		ptr++;
	return (ptr - str);
}

static int	count_substrings(const char *str, char separator)
{
	int			substring_count;
	size_t		length;

	substring_count = 0;
	while (*str != '\0')
	{
		while (*str == separator)
			str++;
		length = substring_length(str, separator);
		str += length;
		if (length != 0)
			substring_count++;
	}
	return (substring_count);
}

static char	*make_substring(const char *str, size_t length)
{
	char	*rezult;

	rezult = malloc(length + 1);
	if (rezult == NULL)
		return (NULL);
	rezult[length] = '\0';
	return (ft_memcpy(rezult, str, length));
}

static char	**freeup(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != NULL)
		free(ptr[i++]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int			substring_count;
	size_t		length;
	int			i;
	char		**rezult;

	if (s == NULL)
		return (NULL);
	substring_count = count_substrings(s, c);
	rezult = malloc((substring_count + 1) * sizeof(size_t));
	if (rezult == NULL)
		return (NULL);
	i = 0;
	while (i < substring_count)
	{
		while (*s == c)
			s++;
		length = substring_length(s, c);
		rezult[i] = make_substring(s, length);
		if (rezult[i++] == NULL)
			return (freeup(rezult));
		s += length;
	}
	rezult[i] = NULL;
	return (rezult);
}
