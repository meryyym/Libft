/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:54:34 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/22 19:00:56 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*actual;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	actual = *lst;
	while (actual != NULL)
	{
		next = actual -> next;
		del(actual->content);
		free(actual);
		actual = next;
	}
	*lst = NULL;
}
