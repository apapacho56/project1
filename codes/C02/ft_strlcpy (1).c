/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:54:56 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/13 21:46:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strsize(char *str)
{
	int	temp;

	temp = 0;
	while (*str != '\0')
	{
		temp++;
		str++;
	}
	return (temp);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	cont;

	cont = ft_strsize(src);
	counter = 0;
	if (size != 0)
	{
		while (*src != '\0' && counter < size - 1)
		{
			*dest = *src;
			src++;
			dest++;
			counter++;
		}
		*dest = '\0';
	}
	return (cont);
}
