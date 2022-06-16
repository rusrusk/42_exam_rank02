void rev_wstr (char *str)
{
	int i = 0;
	int j;
	int first_word = 1;

	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == '\0' || str[i] == 32 || str[i] == 9))
		{
			i--;
		}
	j = i;
		while (j >= 0 && str[j] != 32 && str[j] != 9)
		{
			j--;
		}
		if (first_word == 0)
		{
			write (1, " ", 1);
		}
	write (1, str + j + 1, i - j);
	first_word = 0;
	i = j;
	}
}


int main (int argc, char **argv)
{
	char *str = "hi man, nice to see you!";

	rev_wstr(str);
	// printf ("%s\n", str);
}