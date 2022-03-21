/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:30:35 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/08 10:33:41 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}

void	ft_print_final(void)
{
	write(1, "789", 3);
}

void	ft_print_comb(void)
{
	char	c[10];
	int		a[3];

	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	while (a[0] <= 6)
	{
		c [a[0]] = 48 + a[0];
		while (a[1] <= 8)
		{
			c[a[1]] = 48 + a[1];
			while (a[2] <= 9)
			{
				c[a[2]] = 48 + a[2];
				ft_print (c[a[0]], c[a[1]], c[a[2]]);
				a[2]++;
			}
			a[1]++;
			a[2] = a[1] + 1;
		}
		a[0]++;
		a[1] = a[0] + 1;
	}
	ft_print_final();
}
