void sort_digits (int *arr, int size)
{
	int i = 0;
	int j = 0;
	int tmp;

	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
	i++;
	}
}
int main ()
{
	int i = 0;

	int nb[] = {8, 2, 6, 7, 4, 1, 9, 3};

	// int *ptr = nb;

	int size = 8;

	sort_digits(nb, size);

	while (i < size)
	{
		printf ("%d", nb[i]);
		i++;
	}
	
	printf ("\n");
}