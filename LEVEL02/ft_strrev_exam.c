int ft_strlen (char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}

char *ft_strrev(char *str)
{
	int  i = 0;
	int len = ft_strlen(str);
	int tmp = 0;

	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return str;
}

int main (void)
{
	char str[] = "c";

	printf ("%s\n", ft_strrev(str));
}
