void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int ft_strlen (char *str)
{
	int i = 0;
	if (!str)
		return 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

int main (int argc, char **argv)
{
	int i = 0;
	int len;
	len = ft_strlen(argv[1]);
	len = 0;
	char temp;

	if (argc == 2)
	{

		len--;
		while (i < len)
		{
			temp = argv[1][i];
			argv[1][i] = argv[1][len];
			argv[1][len] = temp;
			i++;
			len--;
		}
		ft_putstr(argv[1]);
	}
	write (1, "\n", 1);
}