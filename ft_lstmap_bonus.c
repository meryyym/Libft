/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <mariama3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:56:07 by mariama3          #+#    #+#             */
/*   Updated: 2024/02/29 19:50:28 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*sol;
	t_list	*nodo;
	void	*content;

	if (!f || !del)
		return (NULL);
	sol = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		nodo = ft_lstnew(content);
		if (!nodo)
		{
			(*del)(content);
			ft_lstclear(&sol, del);
			return (0);
		}
		ft_lstadd_back(&sol, nodo);
		lst = lst->next;
	}
	return (sol);
}
