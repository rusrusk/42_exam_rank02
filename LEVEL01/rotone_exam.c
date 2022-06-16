void last_char (char c)
{
	if (c == 90)
	{
		write (1, "A", 1);
	}
	else if (c == 122)
	{
		write (1, "a", 1);
	}
	else
		write (1, &c, 1);
	// return 0;
} 

int main (int argc, char **argv)
{
	char count;
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 89) ||
					(argv[1][i] >= 97 && argv[1][i] <= 121))
			{
				count = argv[1][i] + 1;
				write (1, &count, 1);
			}
			else
			{
				last_char(argv[1][i]);
			}
		i++;
		}
	}
	write (1, "\n", 1);
}