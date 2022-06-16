void to_upper (char c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	write (1, &c, 1);
}

void to_lower (char c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	write (1, &c, 1);
}

void capitalize (char *str)
{
	int i = 0;
	if (str[0] >= 97 && str[0] <= 122)
		{
			str[i] -= 32;
			write (1, &str[0], 1);
			
		}
		else	
			write (1, &str[0], 1);
	i++;
	while (str[i])
	{
		
		 if (str[i] != 32 && str[i - 1] == 32)
		{
			to_upper(str[i]);
		}
		else
		{
			to_lower(str[i]);
		}
	i++;
	}
	
}

int main (int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			capitalize(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}