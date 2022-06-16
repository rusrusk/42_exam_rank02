void fprime (int nb)
{
	int i = 2;

	if (nb == 1)
	{
		printf ("1");
	}
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			printf ("%d", i);
			if (nb != i)
			{
				printf ("*");
			}
			nb = nb / i;
			i--;
		}
		i++;
	}
}



int main (int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
		printf ("\n");
	}
}