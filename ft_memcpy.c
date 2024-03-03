/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:51:03 by mariama3          #+#    #+#             */
/*   Updated: 2024/01/15 12:51:03 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	src_ptr = (const char *) src;
	dest_ptr = (char *)dst;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n-- > 0)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dst);
}
