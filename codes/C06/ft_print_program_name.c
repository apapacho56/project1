/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:31 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/16 11:32:26 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int	tam;

	tam = ft_tam (argv[0]);
	if (argc != '\0')
	{
		write(1, argv[0], tam);
		write(1, "\n", 1);
	}
}
