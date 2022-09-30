#include "my_math.h"

int	main(int argc, char **argv)
{
	if (!strcmp(argv[1], "mdc"))
	{
		if (argc != 4)
		{
			write(2, "invalid args\n", 13);
			return (1);
		}
		mdc(atoi(argv[2]), atoi(argv[3]));
	}
	else if (!strcmp(argv[1], "mmc"))
	{
		if (argc != 4)
		{
			write(2, "invalid args\n", 13);
			return (1);
		}
		mmc(atoi(argv[2]), atoi(argv[3]));
	}
	else if (!strcmp(argv[1], "torricelli"))
	{
		if (argc != 5)
		{
			write(2, "invalid args\n", 13);
			return (1);
		}
		torricelli(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
	}
	else if (!strcmp(argv[1], "bhaskara"))
	{
		if (argc != 5)
		{	
			write(2, "invalid args\n", 13);
			return (1);
		}
		bhaskara(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
	}
	return (0);
}
