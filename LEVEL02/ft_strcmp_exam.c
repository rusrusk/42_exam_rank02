
int ft_strcmp (char *s1, char *s2)
{
	int i = 0;

	if (!s1 || !s2)
	{
		return 0;
	}
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return 0;
}

int main (int argc, char **argv)
{
	int i = 0;

	int result = ft_strcmp(argv[1], argv[2]);

	if (argc == 3)
	{
		// while (argv[1] && argv[2][i])
		// {
			if (result > 0)
				printf ("s1 is greater than s2");
			else if (result < 0)
				printf ("s1 is less than s2");
			else
				printf ("s1 and s2 are equal");
		// i++;
		// }
	}
}

 int main (void)
 {
 	 char str1[] = "ali";
 	 char str2[] = "abi";

 	int ptr = ft_strcmp(str1, str2);
 	if (ptr < 0)
 	{
 		printf ("str1 is less than str2");
 	}
 	else if(ptr > 0)
 	{
 		printf ("str1 is greater than s2");
 	}
	else
	{
		printf ("they are finally equal");
	}
}
