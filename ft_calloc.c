/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:18:48 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 19:01:29 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*index;

	index = malloc(count * size);
	if (index == NULL)
	{
		return (0);
	}
	ft_bzero(index, count * size);
	return (index);
	free(index);
}
