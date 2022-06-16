void		ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	write (1, &c, 1);
}

void		ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	write (1, &c, 1);
}

void capitalize (char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] != 32 && (str[i + 1] == 32 || str[i + 1] == '\0'))
		{
			ft_to_upper(str[i]);
		}
		else
		{
			ft_to_lower(str[i]);
		}
	i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	i = 1;

	while (i < argc)
	{
		capitalize(argv[i]);
		write(1, "\n", 1);
		i++;
	}
		// write(1, "\n", 1);
	return (0);
}