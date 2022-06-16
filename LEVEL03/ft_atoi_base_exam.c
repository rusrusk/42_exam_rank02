int ft_atoi_base (const char *str, int str_base)
{
	int i = 0;

	int value = 0;
	int conversion = 1;

	if (str[i] == '-')
	{
		conversion = -1;
		i++;
	}
	while (str[i])
	{
		value = value * str_base;
		if (str[i] >= 48 && str[i] <= 57)
		{
			value = value + str[i] - 48;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			value = value + str[i] - 55;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			value = value + str[i] - 87;
		}
	i++;
	}
	return value * conversion;
}

int main ()
{
	char str[] = "123";
	printf ("%d\n",  ft_atoi_base("34520b80B", 13));
}