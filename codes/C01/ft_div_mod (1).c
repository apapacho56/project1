/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:10:22 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/08 19:46:25 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	d;
	int	m;

	d = a / b;
	m = a % b;
	*div = d;
	*mod = m;
}

// #include <stdio.h>
// void ft_div_mod(int a, int b, int *div, int *mod);

// int main()
// {
// int a = 27, b = 10;
// int *div = &a;
// int *mod = &b;
// ft_div_mod( a, b, div, mod);
// printf(" %d\n", *div);
// printf(" %d", *mod);
// return 0;
// }