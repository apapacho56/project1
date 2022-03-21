/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:10:53 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/14 22:12:27 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power (nb, power - 1));
}

// #include <stdio.h>
// int main()
// {
// 	int nb=5;
// 	int power=5;
// 	printf("%d \n",ft_recursive_power (nb,power));
// }