/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:13:58 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 18:54:42 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	needle_len = ft_strlen(needle);
	i = 0;
	j = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	while ((haystack[i] != '\0') && (i + needle_len) <= len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
		{
			if (j == (needle_len - 1))
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
