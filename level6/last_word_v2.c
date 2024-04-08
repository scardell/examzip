
#include <unistd.h>

int	space(int i)
{
	return (i == ' ' || (i >= 9 && i <= 13));
}

int printable(int i)
{
	return(i >= 33 && i <= 126);
}

void	ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (space(str[i]) && printable(str[i + 1]))
			j = i + 1;
		i++;
	}
	while (printable(str[j]))
	{
		write(1, &str[j], 1);
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}