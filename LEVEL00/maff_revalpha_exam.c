int ft_strlen (char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void check_alpha(char *str)
{
	int i = 0;
	while (str[i])
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				if (str[i] % 2 == 0)
					str[i] += 32;
			}
			else if (str[i] >= 97 && str[i] <= 122)
			{
				if (str[i] % 2 != 0)
					str[i] -= 32;
			}
			i++;
		}
}

int main (int argc, char **argv)
{
	int i = 0;
	int len = ft_strlen(argv[1]);
	int tmp = 0;
	if (argc == 2)
	{
		while (i < len)
		{
			tmp = argv[1][i];
			argv[1][i] = argv[1][len - 1];
			argv[1][len -1] = tmp;
			i++;
			len--;
		}
		i = 0;
		check_alpha(argv[1]);
		ft_putstr(argv[1]);
	}
	write (1, "\n", 1);
}