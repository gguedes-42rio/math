#include <stdlib.h>
#include <stdio.h>

void	mmc(int n1, int n2)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (n1 != 1 || n2 != 1)
	{
		i++;
		if (!(n1 % i) || !(n2 % i))
		{
			printf("%i	%i	%i\n", n1, n2, i);
			if (!(n1 % i))
				n1 /= i;
			if (!(n2 % i))
				n2 /= i;
			j *= i;
			i = 1;
		}
	}
	printf("		%i\n", j);
}
