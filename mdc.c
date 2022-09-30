#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	i;
	int	j;

	if (argc != 3)
		return (1);
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = 1;
	j = 1;
	while (i <= n1 && i <= n2)
	{
		i++;
		if (!(n1 % i) && !(n2 % i))
		{
			printf("%i	%i	%i\n", n1, n2, i);
			n1 /= i;
			n2 /= i;
			j *= i;
			i = 1;
		}
	}
	printf("%i	%i\n", n1, n2);
	printf("		%i\n", j);
	return (0);
}