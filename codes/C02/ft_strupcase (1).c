/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:06:28 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/14 15:10:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that transforms every letter to uppercase.
char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if ((*str >= 97 && *str < 123))
			*str = *str - 32;
		str++;
	}
	return (temp);
}

#include <stdio.h>
#include <string.h>
char *ft_strupcase(char *str);
int main(void)
{
	char src[] = "abc";                     ";
   ft_strupcase(src);
   printf("resp : %s\n", src);
}