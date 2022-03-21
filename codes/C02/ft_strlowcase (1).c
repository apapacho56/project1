/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:06:41 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 17:27:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that transforms every letter to uppercase.
char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (temp);
}

//#include <stdio.h>
// #include <string.h>
// char *ft_strlowcase(char *str);
// int main(void)
// {
// 	char src[] = "A  BC";
// 	//	char dest[]= "                     ";
//    ft_strlowcase(src);
//    printf("resp : %s\n", src);
//    //printf("Final string : %s\n", dest);
// }