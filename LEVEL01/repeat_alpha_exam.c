int main (int argc, char **argv)
{
	int i = 0;
	int count = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				count = argv[1][i] - 64;
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				count = argv[1][i] - 96;
			}
			while (count-- > 0)
			{
				write (1, &argv[1][i], 1);
			}
		count = 1;
		i++;
		}
	}
	write (1, "\n", 1);
}