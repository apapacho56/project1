/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:15:28 by slakner           #+#    #+#             */
/*   Updated: 2022/02/14 17:02:04 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	confirm_null(int value)
{
	if (value == 0)
	{
		write (1, "0", 1);
		return (0);
	}
	return (1);
}

void	convert_decimal(int value, char *max_c, int counter)
{
	if (value < 0)
		max_c[counter] = '0' + (value % 10) * -1;
	else
		max_c[counter] = '0' + (value % 10);
}

void	ft_print_nzero(int value)
{
	char	max_c[10];
	int		counter;

	counter = 0;
	if (value < 0)
		write (1, "-", 1);
	while (value != 0)
	{
		convert_decimal(value, max_c, counter);
		value /= 10;
		counter++;
	}
	while (counter > 0)
	{
		counter --;
		write (1, &max_c[counter], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (confirm_null(nb))
	{
		ft_print_nzero(nb);
	}
}

// int	main()
// {
// 	ft_putnbr(234711);
// 	write (1, "\n", 1);
// 	ft_putnbr(0);
// 	write (1, "\n", 1);
// 	ft_putnbr(2147483647);
// 	write (1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write (1, "\n", 1);
// 	ft_putnbr(-(-2147483648));
// 	write (1, "\n", 1);
// }