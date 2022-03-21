/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:01:20 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 20:39:10 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strcpy (man strcpy).
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (temp);
}

int main(void)
{
	char src[] = "12345";
	char dest[] = "00000";
	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}