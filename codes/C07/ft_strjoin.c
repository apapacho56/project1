/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:07:29 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/17 21:52:45 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strflen(char **str, int size, int sep_size)
{
	int	tam_f;
	int	i;

	tam_f = 0;
	i = 0;
	while (i < size)
	{
		tam_f += ft_strlen(str[i]);
		tam_f += sep_size;
		i++;
	}
	tam_f -= sep_size;
	return (tam_f);
}

char	*ft_extra(int i, int size1, char *new1, char *sep1)
{	
	if (i < size1 - 1)
	{
		ft_strcpy(new1, sep1);
		new1 += ft_strlen(sep1);
	}
	return (new1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tam;
	int		i;
	char	*string;
	char	*new;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	tam = ft_strflen(strs, size, ft_strlen(sep));
	string = (char *)malloc((tam + 1) * sizeof(char));
	new = string;
	if (!new)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(new, strs[i]);
		new += ft_strlen(strs[i]);
		new = ft_extra(i, size, new, sep);
		i++;
	}
	*new = '\0';
	return (string);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	int	size;

// 	size = 3;
// 	strs = (char **)malloc(3 * sizeof(char *));
// 	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
// 	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
// 	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
// 	strs[0] = "Hello";
// 	strs[1] = "friend,";
// 	strs[2] = "you are awesome";
// 	separator = " ";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s$\n", result);
// 	free(result);
// }