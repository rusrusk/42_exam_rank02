int ft_strlen (char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}

void ft_putstr (char *str)
{
	int i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int firts_str_len = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					firts_str_len++;
					break;
				}
			j++;
			}
		i++;
		}
		if (firts_str_len == ft_strlen(argv[1]))
		{
			ft_putstr(argv[1]);
		}
	}
	write (1, "\n", 1);
}