int main (int argc, char **argv)
{
	int i = 0;
	if (argc != 1)
	{
		argc--;
		while (argv[argc][i])
		{
			write (1, &argv[argc][i], 1);
			
		i++;
		
		}
	}
}