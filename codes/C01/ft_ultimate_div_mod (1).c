/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:34:17 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/08 20:11:39 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}

// #include <stdio.h>
// void ft_ultimate_div_mod(int *a, int *b);
// int main()
// {
// int a = 56, b = 30;
// int *div = &a;
// int *mod = &b;
// ft_ultimate_div_mod( div, mod);
// printf(" %d\n", *div);
// printf(" %d", *mod);
// return 0;
// }