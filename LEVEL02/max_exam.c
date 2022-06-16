int max (int *tab, unsigned int len)
{
	int i = 0;
	int max = 0;
	 if (tab)
	 {
		 i = 0;
		 tab[0] = max;
	 }
	 while (i < len)
	 {
		 if (tab[i] > max)
		 {
			 max = tab[i];
		 }
		i++;
	 }
	 return max;
}
int main ()
{
	int arr[] = {4, 2, 9, 20, 13, 19, 4, 45};

	int size  = 8;

	printf ("%d\n", max (arr, size));
}