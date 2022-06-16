void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j = 0;
	int tmp = 0;

	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		j++;
		}
	i++;
	}
}


int main (int argc, char **argv)
{
	int tab[] = {4, 2, 9, 7 ,5 ,6, 1, 6};

	int size = 8;

	int i = 0;

	sort_int_tab (tab, size);

	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}