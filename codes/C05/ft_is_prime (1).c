/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:28:47 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/15 17:41:11 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that returns 1 if the number given 
as a parameter is a prime number, and 0 if it isnt.
*/
int	ft_is_prime(int nb)
{
	int	divider;

	divider = 2;
	if (nb <= 1)
		return (0);
	while (divider < nb)
	{
		if ((nb % divider) == 0)
			return (0);
		divider++;
	}
	return (1);
}

#include <stdio.h>
int ft_is_prime(int nb);
int main()
{
	int nb=2147483647;
	printf("%d \n", ft_is_prime(nb));
}