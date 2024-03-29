/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/13 05:10:54 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(int), void (*del)(int))
// {
// 	t_list	*lsr;
// 	t_list	*temp;

// 	if (!lst || !f)
// 		return (NULL);
// 	lsr = ft_lstnew(f(lst->content));
// 	temp = lsr;
// 	lst = lst->next;
// 	while (lst)
// 	{
// 		lsr->next = ft_lstnew(f(lst->content));
// 		if (!lsr)
// 		{
// 			ft_lstclear(&temp, del);
// 			return (NULL);
// 		}
// 		lst = lst->next;
// 		lsr = lsr->next;
// 	}
// 	return (temp);
// }
