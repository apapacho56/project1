/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:50:48 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/14 21:53:28 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb == 0 && power == 0)
		return (1);
	while (power != 0)
	{
		result = result * nb ;
		power--;
	}
	return (result);
}

// #include<stdio.h>
// int main()
// {
// 	int nb=0;
// 	int power=0;
// 	printf("%d \n", ft_iterative_power(nb,power));
// }