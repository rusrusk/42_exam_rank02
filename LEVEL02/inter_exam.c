int check_doubles (char *str, char c, int index)
{
	int i = 0;
	while (i < index)
	{
		if (str[i] == c)
		{
			return 0;
		}
	i++;
	}
	return 1;
}

//inter.c

int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (check_doubles(argv[1], argv[1][i], i))
					{
						write (1, &argv[1][i], 1);
						break;
					}
				}
			j++;
			}
		i++;
		}
	}
	write (1, "\n", 1);
}