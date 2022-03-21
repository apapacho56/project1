/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:29:13 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/16 19:37:41 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tam(char *argv)
{	
	int	counter;

	counter = 0;
	while (*argv != 0)
	{
		counter++;
		argv++;
	}
	return (counter);
}

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	int tam;

	i = argc-1;
	while (i != 0)
	{
		tam = ft_tam(argv[i]); //ft_strlen
		write(1, argv[i], tam);
		write(1, "\n", 1);
		i--;
	}
}