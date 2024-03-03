/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:04:32 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 18:47:32 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		len_s1;
	size_t		len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (0);
	str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (str == NULL)
		return (str);
	ft_memcpy(str, s1, len_s1);
	ft_memcpy(str + len_s1, s2, len_s2 + 1);
	return (str);
}
