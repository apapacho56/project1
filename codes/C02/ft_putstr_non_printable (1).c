/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:28:36 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 20:49:04 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// Create a function that transforms every letter to uppercase.
void	covert_to_hex(char *nbr_hexa, unsigned char to_convert)
{
	const char	values[] = "0123456789abcdef";

	nbr_hexa[0] = values[to_convert / 16 % 16];
	nbr_hexa[1] = values[to_convert % 16];
}

void	ft_putstr_non_printable(char *str)
{
	char	temp[2];
	int		i;

	i = 92;
	while (*str != '\0')
	{
		if (*str < 32)
		{
			write(1, &i, 1);
			covert_to_hex(temp, *str);
			write (1, temp, 2);
		}
		else
			write (1, str, 1);
		str++;
	}
}

#include <stdio.h>
#include <string.h>
void ft_putstr_non_printable(char *str);
int main(void)
{
	char src[] = "Coucou\ntu vas bien ?";
	//	char dest[]= " 
	//printf("resp : %s\n", src);                    ";
    ft_putstr_non_printable(src);
   //printf("Fiznal string : %s\n", dest);
}