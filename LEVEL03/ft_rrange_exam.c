int *ft_rrange (int start, int end)
{
	int *ptr;
	int *res;
	int i = 0;

	int size = end - start + 1;

		ptr = malloc (sizeof (int *) * i);

		// res = ptr;
		while (start <= end)
		{
			ptr[i] = end;
			i++;
			end--;
		}
		ptr[i] = end;
		while (start > end)
		{
			ptr[i] = end;
			end++;
			i++;
		}
		ptr[i] = end;
	return ptr;
	
}

int ft_abs (int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	return nb;
}


int main ()
{
	int start = -4;
	int end = 1;
	int *arr;
	int i;

	arr = ft_rrange (start, end);
	i = 0;

	while (i < ft_abs(end - start) + 1)
	{
		printf ("%d\n", arr[i]);
		i++;
	}
}