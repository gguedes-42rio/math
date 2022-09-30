#include "my_math.h"

void	mdc(int n1, int n2)
{
	int	i;
	int	j;

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
}
