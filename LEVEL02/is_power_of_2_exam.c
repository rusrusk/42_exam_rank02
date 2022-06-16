int is_power_of_2(unsigned int n)
{
	while (n > 1)
	{
		if (n % 2 != 0 && n != 1)
		{
			return 0;
		}
	n /= 2;
	}
	return 1;
}

int main ()
{
	printf ("%d\n", is_power_of_2(64));
}