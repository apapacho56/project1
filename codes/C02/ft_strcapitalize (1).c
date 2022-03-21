/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:27:29 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/10 20:47:36 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	bandera;

	bandera = 1;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if (*str >= 97 && *str < 123)
		{
			if (bandera == 1)
			{
				*str -= 32;
				bandera = 0;
			}
		}
		else if (*str >= 48 && *str <= 57)
		{
			bandera = 0;
		}
		else
			bandera = 1;
		str++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char c[]="salut, comment tu vas ? 42Mmots quarante-deux; cinquante+et+un";
// 	printf("%s \n",c);
// 	ft_strcapitalize(c);
// 	printf("%s \n",c);
// 	return(0);
// }