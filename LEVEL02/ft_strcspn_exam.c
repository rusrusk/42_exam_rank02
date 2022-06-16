

int	ft_strcspn(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				return i;
			}
		j++;
		}
	i++;
	}
	i = 0;
	while (s1[i])
	{
		i++;
	}
	return i;
}


int main ()
{
	char str1[] = "fmkltgtgtggtg";
	char str2[] = "";

	printf ("%zu\n", ft_strcspn(str1, str2));
	printf ("%lu\n", strcspn(str1, str2));
}