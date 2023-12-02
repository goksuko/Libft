/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:28:04 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/12/02 10:17:44 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function returns a pointer 
to the first occurrence of the 
character c in the string s.
The strchr() function returns a pointer 
to the first occurrence of the character 
c in the string s.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s || !c)
		return (NULL);
	if (c == '\0')
		return ((char *)&s[ft_strlen((char *)s)]);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s;
	char	ss[] = "tripouille";
	int		c;

	s = "Hello";
	c = 'l';
	printf("org code:%s\n", strchr(s, c));
	printf(" my code:%s\n", ft_strchr(s, c));
	printf("org code:%s\n", strchr(ss, 't' + 256));
	printf(" my code:%s\n", ft_strchr(ss, 't' + 256));
	return (0);
}
*/