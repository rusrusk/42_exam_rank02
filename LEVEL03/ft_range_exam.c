int *ft_range (int start, int end)
{
	int i = 0;
	int *ptr;
	int *res;

	i = end - start + 1;
	if (i)
	{
		ptr = malloc (sizeof (int *) * (i));
		if (ptr)
		{
			res = ptr;
			while (start <= end)
			{
				*ptr = start;
				ptr++;
				start++;
			}
			return res;
		}
	}
	return 0;
}

int ft_abs(int nb)
{
	if (nb < 0)
		nb = - nb;
	return (nb);
}

int	main(void)
{
	int	*array;
	int start = -1;
	int end = 4;
	int i;

	array = ft_range(start, end);
	i = 0;
	while (i < ft_abs(end - start) + 1)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
