/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:54:54 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/08 19:54:31 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	temp;

	temp = 0;
	while (*str != '\0')
	{
		temp = temp + 1;
		str = str + 1;
	}
	return (temp);
}

// #include <stdio.h>
// int ft_strlen(char *str);
// int main()
// {
// char str[12] = "coming      "; // create a string "str"
// char *pstr = str;// assignate to the string str a pointer pstr
// int temp;
// temp=ft_strlen( pstr);
// printf(" %d\n", temp);
// return 0;
// }