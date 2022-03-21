/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:00:36 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/14 16:35:36 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int		main(void)
// {
// 	char *str;
// 	str = "adsadd\n";
// 	ft_putstr(str);
// }
