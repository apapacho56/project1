/*>./a.out test1 test2 test3
test1
test2
test3
*/
#include <unistd.h>

int	ft_tam(char *argv)
{	
	int	counter;

	counter = 0;
	while (*argv != 0)
	{
		counter++;
		argv++;
	}
	return (counter);
}

int	main(int argc, char **argv) //argv  1 hi| 2 world |3 hh1|4  awasd
{//i = only calling strings , j = specifing letter or character
	int	i;
	int tam;

	i = 1;
	while (i < argc)
	{
		tam = ft_tam(argv[i]);
		write (1, argv[i], tam);
		write (1, "\n",1);
		i++;
	}
	return (0);
}