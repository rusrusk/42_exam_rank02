int ft_atoi (char *str)
{
	int i = 0;
	int conversion = 1;
	int value = 0;

	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			conversion = -1;
		i++;
	}
	
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		value = value * 10 + str[i] - 48;
		i++;
	}
	return value * conversion;
}

int main (int argc, char **argv)
{
	int i = 0;
	int count = 0;
	
	if (argc == 4)
	{
			if (argv[2][0] == '%')
			{
				count = ft_atoi(argv[1]) % ft_atoi(argv[3]);
			}
			else if (argv[2][0] == '*')
			{
				count = ft_atoi(argv[1]) * ft_atoi(argv[3]);
			}
			else if (argv[2][0] == '+')
			{
				count = ft_atoi(argv[1]) + ft_atoi(argv[3]);
			}
			else if (argv[2][0] == '-')
			{
				count = ft_atoi(argv[1]) - ft_atoi(argv[3]);
			}
			else if (argv[2][0] == '/')
			{
				count = ft_atoi(argv[1]) / ft_atoi(argv[3]);
			}
		printf("%d\n", count);
	}
	else
		write (1, "\n", 1);
}