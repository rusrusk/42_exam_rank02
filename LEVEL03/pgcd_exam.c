void pgcd (int a, int b)
{
	int i = 1;
	int value = 0;

	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)
		{
			value = i;
		}
		i++;
	}
	printf ("%d", value);
}

int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 3)
	{
		pgcd(atoi(argv[1]), atoi(argv[2]));
	}
	printf("\n");
}