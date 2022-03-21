/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:54:36 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/17 21:54:58 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	i;
	int	*inicio;

	if (min >= max)
		return (0);
	temp = malloc(sizeof(int) * (max - min));
	inicio = temp;
	i = 0;
	while (min + i < max)
	{
		temp[i] = min + i;
		i++;
	}
	return (inicio);
}

// #include <stdio.h>
// int main()
// {
// 	int min =3;
// 	int max = 9;
// 	int i=0;
// 	int *p;
// 	p = ft_range(min, max);
// 	while ( i< max-min)
// 	{
// 		printf("%d, \n", p[i]);
// 		i++;
// 	}
// }