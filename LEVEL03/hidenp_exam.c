int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int count = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[1][j])
			{
				if (argv[1][i] == argv[1][j])
				{
					count++;
					break;
				}
			j++;
			}
		i++;
		}
		if (argv[1][count] == '\0')
		{
			write (1, "1", 1);
		}
		else
			write (1, "0", 1);
	}
	write (1, "\n", 1);
}