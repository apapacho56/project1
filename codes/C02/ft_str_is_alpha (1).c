/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:39:52 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 20:17:26 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 97 && *str < 123) || (*str >= 65 && *str <= 90)))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
#include <string.h>
int ft_str_is_alpha(char *src);
int main(void)
{
	char src[] = "";
//	char dest[]= "                     ";
  // ft_str_is_alpha(src);
   printf("resp : %d\n",  ft_str_is_alpha(src));
   //printf("Final string : %s\n", dest);
}