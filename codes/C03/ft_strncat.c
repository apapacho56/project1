/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:28:42 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/12 18:29:09 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*return_value;

	return_value = dest;
	while (*dest)
		dest++;
	while (*src && (nb != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = 0;
	return (return_value);
}

// #include <stdio.h>
// #include <string.h>
// char	*ft_strncat(char *dest, char *src, unsigned int nb);
// int main()
// {
//     char dest[20] = "WOOG";
//     char src[20] = "abc";
// 	char n = 6;

//     printf("%s\n", ft_strncat(dest, src, n));
// 	char dest2[20] = "WOlkmOG";
//     char src2[20] = "abclmjkklj";
// 	printf("%s\n", strncat(dest2, src2, n));
// }