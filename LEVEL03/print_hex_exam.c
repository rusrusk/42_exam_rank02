void ft_putchar (char c)
{
	write (1, &c, 1);
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
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		value = value * 10 + str[i] - 48;
		i++;
	}
	return value * conversion;
}

void hexadecimal (int n)
{
	if (n >= 16)
	{
		hexadecimal(n / 16);
		hexadecimal(n % 16);
	}
	if (n <= 9)
	{
		ft_putchar (n + 48);
	}
	else if (n < 16)
	{
		ft_putchar(n + 87);
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		hexadecimal(ft_atoi(argv[1]));
	}
	write (1, "\n", 1);
}