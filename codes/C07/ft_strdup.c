/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:53:10 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/17 21:54:18 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_tam(char *str)
{
	int	counter;

	counter = 0;
	while (*str != 0)
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	char	*p_0;

	temp = malloc(ft_tam(src)+1);
	p_0 = temp;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = 0;
	return (p_0);
}

// #include <stdio.h>
// #include<string.h>
// int main() {
//    char *str = "Helloworld";
//    char *result;
//    result = strdup(str);
//    printf("The string : %s \n", result);
//    result = ft_strdup(str);
//    printf("The string : %s \n", result);
//    return 0;
// }