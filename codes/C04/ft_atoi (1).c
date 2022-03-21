/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:38:10 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/15 20:57:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int				result;
	int				sign;
	unsigned int	i;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
int    main(void)
{
    printf("-23434: %d\n", ft_atoi("    ---++--23434ffhf6445"));
    printf("0: %d\n", ft_atoi("  f  --+++--23434ffhf6445"));
    printf("0: %d\n", ft_atoi("    --++g--23434ffhf6445"));
    printf("0: %d\n", ft_atoi("    --+++--ffhf6445"));
    printf("-56: %d\n", ft_atoi(" \n   --+-+--56ffhf6445"));
    printf("WS: %d\n", ft_atoi("    "));
    printf("abc: %d\n", ft_atoi("abc"));
    printf(" abc: %d\n", ft_atoi(" abc"));
    printf("12: %d\n", ft_atoi("12"));
    printf("null: %d\n", ft_atoi("0"));
    printf("-0: %d\n", ft_atoi("-0"));
    printf("-+1: %d\n", ft_atoi("-++1"));
    printf("leer: %d\n", ft_atoi("-91483647"));
	printf("leer: %d\n", ft_atoi("-2147483648"));
}