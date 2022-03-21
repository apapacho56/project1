/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:25:32 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/14 21:26:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*• Create a recursive function that returns the factorial  
    of the number given as a parameter.
• If the argument is not valid the function should return 0.
• Overflows must not be handled, the function return will be undefined.
*/
int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

	// #include <stdio.h>
	// int main()
	// {
	// 	int nb=-5;
	// 	printf("%d \n",ft_recursive_factorial(nb));
	// }