/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:48:31 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/07 00:21:45 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *src, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mlst;
	t_list	*curr;
	t_list	*prev;

	(void)del;
	mlst = NULL;
	prev = NULL;
	while (src != NULL)
	{
		curr = ft_lstnew(f(src->content));
		if (mlst == NULL)
			mlst = curr;
		if (prev != NULL)
			prev->next = curr;
		prev = curr;
		src = src->next;
	}
	return (mlst);
}
