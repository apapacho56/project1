/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:29:29 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/14 13:21:57 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*haystack  This is the main C string to be scanned.
needle  This is the small string to be searched with-in haystack string.
This function returns a pointer to the first occurrence in haystack of 
any of the entire sequence of characters specified in needle, 
or a null pointer if the sequence is not present in haystack.
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_str_found(int i, char *str, char *to_find, int size_tofind)
{
	int	counter1;
	int	counter2;

	if (str[i] == to_find[0])
	{
		counter1 = 1;
		counter2 = 1;
		while (counter1 < size_tofind)
		{
			if (str[i + counter1] == to_find[counter1])
				counter2++;
			counter1++;
		}
		if (counter1 == counter2)
			return (&str[i]);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		size_tofind;
	char	*temp;

	if (*to_find == '\0')
	{
		return (str);
	}
	size_tofind = ft_strlen(to_find);
	i = 0;
	while (str[i] != '\0')
	{
		temp = ft_str_found(i, str, to_find, size_tofind);
		if (temp != 0)
		{
			return (temp);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// char    *ft_strstr(char *str, char *to_find);
// int main () 
// {
//    char haystack[30] = "TutPoirialsPointsddsf";
//    char needle[10] = "Point";
//    char *ret;
//    char *ret1;
// 	printf("%s \n",haystack);
//    ret = ft_strstr(haystack, needle);
//     ret1 = strstr(haystack, needle);
//    printf("The substring is: %s\n", ret);
//    printf("The substring is: %s\n", ret1);
//    return(0);
// }