/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:25:00 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 18:48:01 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set_char(char c, char const *setc)
{
	while (*setc)
	{
		if (*setc == c)
			return (1);
		setc++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*nstr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_set_char(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && is_set_char(s1[end - 1], set))
		end--;
	nstr = (char *)malloc(end - start + 1);
	if (!nstr)
		return (NULL);
	ft_memcpy(nstr, s1 + start, end - start);
	nstr[end - start] = '\0';
	return (nstr);
}
