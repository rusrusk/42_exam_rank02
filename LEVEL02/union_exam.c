int doubles1 (char *str, char c, int index)
{
	int i = 0;
	while (i < index)
	{
		if (str[i] == c)
		{
			return 0;
		}
	i++;
	}
	return 1;
}

int doubles2 (char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return 0;
		}
	i++;
	}
	return 1;
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (doubles1(argv[1], argv[1][i], i))
				write (1, &argv[1][i], 1);
		i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (doubles2(argv[1], argv[2][i]))
			{
				if (doubles1(argv[2], argv[2][i], i))
					write (1, &argv[2][i], 1);
			}
		i++;
		}
	}
	write (1, "\n", 1);
}