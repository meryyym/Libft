/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:25:38 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 18:57:08 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = (char *)dst;
	src_ptr = (const char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dest_ptr < src_ptr || dest_ptr >= (src_ptr + n))
		ft_memcpy(dst, src, n);
	else
	{
		dest_ptr += n - 1;
		src_ptr += n - 1;
		while (n--)
			*dest_ptr-- = *src_ptr--;
	}
	return (dst);
}
