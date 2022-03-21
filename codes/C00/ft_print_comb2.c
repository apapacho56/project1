/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:49:14 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/05 21:05:39 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c, int d)
{
	char	str[100];

	str[a] = 48 + a;
	str[b] = 48 + b;
	str[c] = 48 + c;
	str[d] = 48 + d;
	write(1, &str[a], 1);
	write(1, &str[b], 1);
	write(1, " ", 1);
	write(1, &str[c], 1);
	write(1, &str[d], 1);
	write(1, ", ", 2);
}

void	ft_print_final(void)
{
	write(1, "98 99", 5);
	write(1, "\n", 1);
}

void	ft_solve_comb2(int v, int x, int y, int z)
{
	while (v <= 9)
	{
		while (x < 8)
		{
			while (y <= 9)
			{
				while (z <= 9)
				{
					ft_print (v, x, y, z);
					z++;
				}
				z = 0;
				y++;
			}
			z = x + 2;
			x++;
			y = 0;
		}
		v++;
		x = 0;
	}
	ft_print_final ();
}

void	ft_print_comb2(void)
{
	int	v;
	int	x;
	int	y;
	int	z;

	v = 0;
	x = 0;
	y = 0;
	z = 0;
	ft_solve_comb2(v, x, y, z);
}
