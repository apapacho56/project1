/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:49:26 by aparedes          #+#    #+#             */
/*   Updated: 2022/02/13 12:34:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*if Return value < 0 then it indicates str1 is less than str2.
if Return value > 0 then it indicates str2 is less than str1.
if Return value = 0 then it indicates str1 is equal to str2.
*/
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0' ))
	{
		if (*s1 == *s2)
			s2++;
		else
			break ;
		s1++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int main () {
//    char str3[]="a";
//    char str4[]="b";
//    char str5[]="c";
//    char str6[]="z";
//    char str7[]="d";
//    char str8[]="123";
//    char str9[]="12   -";
//    char str10[]="apples";
//    char str11[]="apple";
//    char str12[]="appl";
//    char str13[]="app  le";
//    int ret;
//    int ret1;
//    ret1 = strcmp(str3, str3);
//    ret = ft_strcmp(str3, str3);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str3, str4);
//    ret = ft_strcmp(str3, str4);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str3, str5);
//    ret = ft_strcmp(str3, str5);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str3, str6);
//    ret = ft_strcmp(str3, str6);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str3, str7);
//    ret = ft_strcmp(str3, str7);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str8, str9);
//    ret = ft_strcmp(str8, str9);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str10, str11);
//    ret = ft_strcmp(str10, str11);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str12, str11);
//    ret = ft_strcmp(str12, str11);
//    printf("%d \n", ret1);
//    printf("%d \n", ret);
//    ret1 = strcmp(str13, str11); 	//app  le   apple
//    ret = ft_strcmp(str13, str11);
//    printf("%d \n", ret1);			//orginal -76
//    printf("%d \n", ret);			//function 64
//    ret1 = strcmp(str11, str13);
//    ret = ft_strcmp(str11, str13);	//apple - app  le
//    printf("%d \n", ret1);			//orginal 76
//    printf("%d \n", ret);			//function -64
//    return(0);
// }