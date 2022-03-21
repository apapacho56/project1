/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:13:45 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 17:20:11 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str < 123))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// #include <string.h>
// int ft_str_is_lowercase(char *str);
// int main(void)
// {
// 	char src[] = "aaa";
// //	char dest[]= "                     ";
//   // ft_str_is_alpha(src);
//    printf("resp : %d\n",  ft_str_is_lowercase(src));
//    //printf("Final string : %s\n", dest);
// }