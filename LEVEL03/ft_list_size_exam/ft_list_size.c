#include "ft_list.h"
#include <stdio.h>

int ft_list_size (t_list *begin_list)
{
	t_list *list;
	int i = 0;

	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return i;
}


int main ()
{
	int i = 0;

	t_list *c = malloc (sizeof (t_list));
	c-> next = NULL;
	c->data = &i;

	t_list *b = malloc (sizeof (t_list));
	b->next = c;
	b->data = &i;

	t_list *a = malloc (sizeof (t_list));
	a->next = b;
	a->data = &i;

	printf ("%d\n", ft_list_size(a));
}