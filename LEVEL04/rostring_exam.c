#include <unistd.h>

void rostring (char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] == 32 || str[i] == 9)
	{
		i++;
	}
	j = i;
	while (str[i] && str[i] != 9 && str[i] != 32)
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] && (str[i] != 32 && str[i] != 9) \
			&& (str[i - 1] == 32 || str[i - 1] == 9))
		{
			while (str[i] && str[i] != 32 && str[i] != 9)
			{
				write (1, &str[i], 1);
				i++;
			}
			write (1, " ", 1);
		}
		i++;
	}
	while (str[j] && str[j] != 32 && str[j] != 9)
	{
		write (1, &str[j], 1);
		j++;
	}

}

// int main (int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		rostring(argv[1]);
// 	}
// }

int main (int argc, char **argv)
{
	int i = 0;

	char *str = "  hello   rus my      friend     ";
	
	rostring (str);

}