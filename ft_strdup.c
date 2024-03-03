/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:26 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 18:59:07 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	len;

	len = ft_strlen(s1);
	s = (char *)malloc(len + 1);
	if (s1 == NULL)
		return (0);
	if (s != NULL)
		ft_memcpy(s, s1, len + 1);
	return (s);
}
