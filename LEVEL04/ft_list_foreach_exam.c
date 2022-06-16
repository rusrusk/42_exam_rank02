#include "ft_list.h"
#include <stdio.h>

void ft_list_foreach (t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;

	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}


int main ()
{
	t_list *ptr_a = malloc (sizeof (t_list));
	int a = 0;
	ptr_a->data = &a;
	ptr_a->next = NULL;

	t_list *ptr_b = malloc (sizeof(t_list));
	int b = 3;
	ptr_b->data = &b;
	ptr_b->next = NULL;

	t_list *ptr_c = malloc (sizeof (t_list));
	int c = 4;
	ptr_c->data = &c;
	ptr_c->next = NULL;

	ptr_a->next = ptr_b;
	ptr_b->next = ptr_c;

	t_list *curr = ptr_a;
	while (curr)
	{
		printf ("%d, ", *(int *)(curr->data));
		curr = curr->next;
	}
	printf ("\n");


}
