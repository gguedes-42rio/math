#include "my_math.h"

void	simp(int n1, int n2)
{
	int	i;

	i = 2;
	while (i < n1 && i < n2)
	{
		if (!(n1 % i) && !(n2 % i))
		{
			n1 /= i;
			n2 /= i;
			i = 1;
		}
		i++;
	}
	printf("x1: %i/%i\n", n1, n2);
}

void	bhaskara(int a, int b, int c)
{
	int	delta;
	int	x1;
	int	x2;

	delta = pow(b, 2) - 4 * a * c;
	printf("delta: %i\n", delta);
	if (delta < 0)
	{
		printf("não possui raiz real\n");
		return ;
	}
	x1 = -b + sqrt(delta);
	a *= 2;
	if (x1 % a)
		simp(x1, a);
	else
		printf("x1: %i\n", x1 / a);
	x2 = -b - sqrt(delta);
	if (x2 % a)
		simp(x2, a);
	else
		printf("x1: %i\n", x2 / a);
}
