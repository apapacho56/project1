/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:04:05 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 12:04:39 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the string 
given as a parameter contains only
digits, and 0 if it contains any other character.
*/
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str < 58))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// #include <string.h>
// int ft_str_is_numeric(char *str);
// int main(void)
// {
// 	char src[] = "1  2314";
// //	char dest[]= "                     ";
//   // ft_str_is_alpha(src);
//    printf("resp : %d\n",  ft_str_is_numeric(src));
//    //printf("Final string : %s\n", dest);
// }