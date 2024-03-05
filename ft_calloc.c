/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:18:48 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/29 19:49:51 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*sol;
	size_t			i;

	i = 0;
	if (!count || !size)
	{
		sol = (void *)malloc(0);
		return (sol);
	}
	sol = malloc(count * size);
	if (!sol)
		return (0);
	while (i < count * size)
	{
		sol[i] = '\0';
		i++;
	}
	return (sol);
}
