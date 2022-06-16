#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
	{
		len = ft_strlen(s);
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	{
		return (NULL);
	}
	while (start < ft_strlen(s) && i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static size_t	count_words(char const *str, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			while (str[i] && str[i] == c)
			{
				i++;
			}
		}
		else
		{
			while (str[i] && str[i] != c)
			{
				i++;
			}
			num++;
		}
	}
	return (num);
}

static char	**ft_set_place(char **str, char const *s1, char ch, int wordcount)
{
	int	i;
	int	length;
	int	word;

	word = 0;
	i = 0;
	length = 0;
	while (s1[i] && word < wordcount)
	{
		while (s1[i] != '\0' && s1[i] == ch)
		{
			i++;
		}
		while (s1[i] != '\0' && s1[i] != ch)
		{
			i++;
			length++;
		}
	str[word] = ft_substr(s1, i - length, length);
	length = 0;
	word++;
	}
	str[word] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;

	if (!s)
	{
		return (NULL);
	}
	i = count_words(s, c);
	ptr = malloc(sizeof(char *) * (i + 1));
	if (!ptr)
	{
		return (NULL);
	}
	ft_set_place(ptr, s, c, i);
	return (ptr);
}

/*
** n --> // gathers occurences of character and increments the amount and
**returns the number of split words

**length ---> counts the length
** of each substring by subtracting the general counter 'i' and 'length'

**word ---> counts words after every char delimiter in the string 
** int main (void)
** {
** 	char str1[] = "howareyoudoingman";
** 	char c = 'a';
** 	char **ptr = ft_split(str1, c);

** 	int i = 0;
** 	while (ptr[i])
** 	{
** 		printf ("%s\n", ptr[i]);
** }
** 		printf ("%zu\n", strlen(*ft_split(str1, c)));
** 		i++;
** 	}
*/