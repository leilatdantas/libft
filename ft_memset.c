/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:06:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/26 12:56:11 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DEF: Fills the first n bytes of the memory area pointed to by s with the 
**	constant byte c. 
**	RETURN VALUE: Returns a pointer to the memory area s. 
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	b;
	size_t			i;

	ptr = s;
	i = 0;
	b = (unsigned char) c;
	while (i < n)
	{
		ptr[i] = b;
		i++;
	}
	return ((void *)s);
}
