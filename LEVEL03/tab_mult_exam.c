void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar (nb + 48);
}

int  ft_atoi(const char *str)
{
	int conversion;
	int i;
	int value;

	value = 0;
	conversion = 1;
	i = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
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
	while (str[i] >= 48 && str[i] <= 57 && (str[i] != '\0'))
	{
		value = (value * 10) + str[i] - 48;
		i++;
	}
	return (value * conversion);
}

int main (int argc, char **argv)
{
	int i = 1;

	if (argc == 2)
	{
		int nb = ft_atoi(argv[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(nb * i);
			if ( i < 9)
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}