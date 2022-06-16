int main (int argc, char **argv)
{
	int i = 0;
	char *result;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] <= 32 && argv[1][i + 1] > 32)
			{
				result = &argv[1][i + 1]; 
			}
			if (result == 0)
				result = argv[1];
		i++;
		}
		// printf ("%s\n", result);
		i = 0;
		while (result && result[i] > 32)
		{
			write (1, &result[i], 1);	
			i++;
		}
	}
	write (1, "\n", 1);
}