/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:49:36 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/21 15:28:26 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DEF: Returns a pointer to the last occurence of the character c in the 
**	string s. 
**	RETURN VALUE: A pointer to the matched character or NULL if the character
**	is not found. 
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = s + i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return ((char *)(last));
}
