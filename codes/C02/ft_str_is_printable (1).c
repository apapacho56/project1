/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:06:16 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 20:21:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 )
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// #include <string.h>
// int ft_str_is_printable(char *str);
// int main(void)
// {
// 	char src[] = "  aa";
// //	char dest[]= "                     ";
//   // ft_str_is_alpha(src);
//    printf("resp : %d\n",  ft_str_is_printable(src));
//    //printf("Final string : %s\n", dest);
// }