/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:15:24 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 19:01:09 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static	int	digits( int n)
{
	size_t	dig;

	dig = 1;
	if (n < 0)
		dig++;
	while (n <= -10 || n >= 10)
	{
		n /= 10;
		dig++;
	}
	return (dig);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*res;

	len = digits(n);
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		if (n < 0)
			res[len - 1] = -(n % 10) + '0';
		else
			res[len - 1] = n % 10 + '0';
		len--;
		n /= 10;
	}
	return (res);
}
