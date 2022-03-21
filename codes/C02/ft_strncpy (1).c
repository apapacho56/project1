/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:13:18 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 20:15:47 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*src != '\0' )
		{
			dest[i] = src[i];
		}
		else
			dest[i] = 0;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// char *ft_strncpy(char *dest, char *src, unsigned int n);
// int main(void)
// {
// 	char src[] = "this is a new world";
// 	char dest[]= "                     ";
//    ft_strncpy(dest, src, 6);
//    printf("first string : %s\n", src);
//    printf("Final string : %s\n", dest);
// }