/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:06:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 17:23:22 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str < 91))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// #include <string.h>
// int ft_str_is_uppercase(char *str);
// int main(void)
// {
// 	char src[] = "AAAA";
// //	char dest[]= "                     ";
//   // ft_str_is_alpha(src);
//    printf("resp : %d\n",  ft_str_is_uppercase(src));
//    //printf("Final string : %s\n", dest);
// }