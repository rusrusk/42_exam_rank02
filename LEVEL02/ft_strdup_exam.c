int ft_strlen (char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}

char *ft_strdup (char *src)
{
	int i = 0;
	int len = ft_strlen(src);

	char *ptr = malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return 0;
	while (i < len)
	{
		ptr[i] = src[i];
	i++;
	}
	ptr[i] = '\0';
	return ptr;
}

int main ()
{
	
	char src[] = "Ruslan";

	char *dst = ft_strdup(src);
	char *dst1 = strdup(src);

	printf ("%s\n", dst);
	printf ("%d\n", ft_strlen(dst));
	
	printf ("%s\n", dst1);
	printf ("%d\n", ft_strlen(dst1));
}