int main (int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			i++;
		}
		write (1, "z", 1);
	}
	else
		write (1, "z", 1);
	write (1, "\n", 1);
}
