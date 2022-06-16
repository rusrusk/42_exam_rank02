int ft_strlen (char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}

int ft_space (char str)
{
	return (str == ' ' || str == '\t' || str == '\0');
}

int main (int argc, char **argv)
{
	int i = 0;
	int length = ft_strlen(argv[1]);

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] += 32;
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122 && ft_space(argv[1][i + 1]))
			{
				argv[1][i] -= 32;
			}
			// else if (argv[1][i] > 97 && argv[1][i] < 122 && argv[1][i + 1] == '\0')
			// {
			// 	argv[1][i] -= 32;
			// }
		write (1, &argv[1][i], 1);
		i++;
		}
	}
	write (1, "\n", 1);
}