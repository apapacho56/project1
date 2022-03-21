/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:55:13 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/17 21:55:49 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
		return (0);
	temp = malloc(sizeof(int) * (max - min));
	if (!temp)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	int i=0;
// 	int *range;
// 	int	length = ft_ultimate_range(&range, -10, 5);
// 	while ( i< length)
// 	{
// 		printf("%d, \n", range[i]);
// 		i++;
// 	}
// }