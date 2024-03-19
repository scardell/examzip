
#include <unistd.h>

int space(int i)
{
	return (i == ' ' || (i >= 9 && i <= 13));
}

int printable(int i)
{
	return (i >= 33 && i <= 126);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(space(argv[1][i]))
			i++;
		while(argv[1][i])
		{
			if (printable(argv[1][i]))
				write(1, &argv[1][i], 1);    
			if (space(argv[1][i]) && printable(argv[1][i+1]))
				write(1, "   ", 3);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}