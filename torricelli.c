#include "my_math.h"

void	torricelli(double v0, double a, double ds)
{
	printf("%f\n", pow(pow(v0, 2) + 2 * a * ds, 2));
}
