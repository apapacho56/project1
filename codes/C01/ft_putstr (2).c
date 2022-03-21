/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:51:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/09 11:38:54 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//&%cancel each other, because *pstr 
//is a pointer and & show the address of the pointer
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = str + 1;
	}
}
