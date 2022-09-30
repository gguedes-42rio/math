#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int	main(int argc, char **argv)
{
	double	v0;
	double	a;
	double	ds;
	double	v;

	if (argc != 4)
		return (1);
	v0 = atoi(argv[1]);
	a = atoi(argv[2]);
	ds = atoi(argv[3]);
	v = pow(v0, 2) + 2 * a * ds;
	printf("%f\n", pow(v, 2));
	return (0);
}