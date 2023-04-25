/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:13:41 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/25 18:25:11 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DEF: Applies the function ’f’ on each character of the string passed as 
**  argument, passing its index as first argument. Each character is passed by 
**  address to ’f’ to be modified if necessary.
**  RETURN VALUE: None. 
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
