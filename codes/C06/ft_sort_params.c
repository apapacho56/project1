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

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int val;
	int tam;

	i = argc - 1;
	tam = 0;
	while (i != 0)
	{
		val = ft_strcmp(argv[i], argv[i-1]);
		if (val < 0)
		{
			ft_swap(argv[i],
		}
		else
		{
			tam = ft_tam(argv[i-1]);
			write(1, argv[i + 1], tam);
			write(1, "\n", 1);
		}
		i--;
	}
}