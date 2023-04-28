/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:10:42 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/28 16:41:38 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  DEF: Adds the node ’new’ at the beginning of the list.
**  RETURN VALUE: None. 
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
