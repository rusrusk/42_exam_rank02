void ft_putchar (char c)
{
	write (1, &c, 1);
}


void ft_putnbr (int nb)
{
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_putchar (nb + 48);
	}
}

int ft_atoi (char *str)
{
	int i = 0;
	int value = 0;
	int conversion = 1;

	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			conversion = -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = value * 10 + str[i] - 48;
		i++;
	}
	return value * conversion;
}

int ft_is_prime(int nb)
{
	int i = 2;

	while (i < nb)
	{
		if (nb % i == 0)
		{
			return 0;
		}
	i++;
	}
	return 1;
}

int prime_sum (int nb)
{
	int i = 2;
	int result = 0;

	if (nb <= 0)
		return 0;
	while (i <= nb)
	{
		if (ft_is_prime(i))
		{
			result += i;
		}
	i++;
	}
	return result;
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(prime_sum(ft_atoi(argv[1])));
	}
	else 
	{
		write (1, "0", 1);
	}
	write (1, "\n", 1);
}