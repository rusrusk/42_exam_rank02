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

int main ()
{
	char str[] = "-43423";

	int nb = ft_atoi(str);

	printf ("%d", nb);
}