/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:11:59 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/16 11:01:52 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		if (nb <= 0)
			return (0);
		fact = fact * nb;
		nb--;
	}
	return (fact);
}

#include <stdio.h>
int main()
{
	int nb=20;
	printf("%d \n",ft_iterative_factorial(nb));
}