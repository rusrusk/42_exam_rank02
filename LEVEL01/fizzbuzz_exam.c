void nb_fizzbuzz (int nb)
{
		char c;

	if (nb > 9)
	{
		nb_fizzbuzz (nb / 10);
	}
	c = nb % 10 + 48;
	write (1, &c, 1);
}

int main ()
{
	int i = 0;
	int nb = 1;

	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
		{
			write (1, "fizzbuzz", 8);
		}
		else if (nb % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		else if (nb % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		else 
		{
			nb_fizzbuzz(nb);
		}
		write (1, "\n", 1);
		nb++;
	}
	
}