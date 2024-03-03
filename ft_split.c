/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:49:44 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 18:56:36 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_split(char **res)
{
	int	index;

	index = 0;
	if (res == NULL)
		return ;
	while (res[index])
	{
		free(res[index]);
		index++;
	}
	free(res);
}

static char	**fill_array(char **array, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	s_len;
	int		k;

	i = 0;
	start = 0;
	s_len = ft_strlen(s);
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (start >= s_len)
			array[k++] = "\0";
		else
			array[k++] = ft_substr(s, start, i - start);
		if (array[k - 1] == NULL)
			return (free_split(array), NULL);
	}
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		n_words;

	if (!s)
		return (NULL);
	n_words = count(s, c);
	array = malloc((n_words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = fill_array(array, s, c);
	if (!array)
	{
		free_split(array);
		return (NULL);
	}
	array[n_words] = NULL;
	return (array);
}
