/* If the index is less than 0, the function should return -1
	fn=f(n-1)+f(n-2)
*/
int ft_fibonacci(int index)
{
	if(index < 0)
		return(-1);
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>
int main ()
{
	int index=10;
	printf("%d \n", ft_fibonacci(index));
}