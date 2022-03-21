/* Create a function that returns the square root of a numnumberer (if it exists), or 0 if the
square root is an irrational numnumberer.
*/
int	ft_sqrt(int nb)
{
	long int	result;
	long int	number;

	result = 2;
	number = nb;
	if (number <= 0)
	{
		return (0);
	}
	if (number == 1)
	{
		return (1);
	}
	if (number > 2) //number=nnumber
	{
		while (result * result <= number)
		{//4 if nnumber = 2
			if (result * result == number)
			{
				return (result);
			}
			result++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("sqrt of %d is %d\n", 25, ft_sqrt(25));
// 	return(0);
// }