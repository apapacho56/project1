/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:24:49 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/16 23:53:16 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
dest  This is pointer to the destination array, which should contain a C string, 
and should be large enough to contain the concatenated resulting string.
src This is the string to be appended. This should not overlap the destination.
*/
int	ft_len(char *s1)
{
	unsigned int	tam;

	tam = 0;
	while (*s1 != '\0')
	{
		tam++;
		s1++;
	}
	return (tam);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (temp);
}

#include <stdio.h>
#include <string.h>
int main () 
{
   char src[50], dest[50];
   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
   strcat(dest, src);
   printf("Final destination string : |%s|", dest);
   return(0);
}