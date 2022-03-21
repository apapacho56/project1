/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:24:13 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/13 14:18:51 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*str1  This is the first string to be compared.
str2  This is the second string to be compared.
n  The maximum number of characters to be compared.
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' && *s2 != '\0' ) && (n != '\0'))
	{
		if (*s1 == *s2)
			s2++;
		else
			break ;
		s1++;
		n--;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int	ft_strncmp(char *s1, char *s2, unsigned int n);
// int main () {
//    char str1[15]="abclmkllml";
//    char str2[15]="abclmmlada";
//    int ret;
//    int ret1;
//    ret = ft_strncmp(str1, str2, 10);
//    printf("%d \n", ret);
//    ret1 = strncmp(str1, str2, 10);
//    printf("%d \n", ret1);

//    return(0);
// }
