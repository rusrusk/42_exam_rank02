#include "sort_list.h"


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	tmp = lst;

	while (lst->next)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data= lst->next->data;
			lst->next->data = swap;

			lst = tmp;
		}
		else
		{
			lst = lst->next;
		}
	}
	lst=tmp;
	return (lst);

}

// void	swap_values(t_list *a, t_list *b)
// {
// 	int swap = a->data;
// 	a->data = b->data;
// 	b->data = swap;
// }

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
// 	int swapped = 1;
// 	t_list *cur = lst;

// 	while (swapped == 1)
// 	{
// 		swapped = 0;
// 		while (cur != 0 && cur->next != 0)
// 		{
// 			if (cmp(cur->data, cur->next->data) == 0)
// 			{
// 				swap_values(cur, cur->next);
// 				swapped = 1;
// 			}
// 			cur = cur->next;
// 		}
// 		cur = lst;
// 	}
// 	return (lst);
// }


int ascending (int a, int b)
{
	return (a<=b);
}


int main ()
{
	t_list *c = malloc (sizeof(t_list));
	c->next = NULL;
	c->data = 45;

	t_list *b = malloc (sizeof(t_list));
	b->next = c;
	b->data = 75;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = 108;

	t_list *curr = a;

	while (curr)
	{
		printf("%d, ", curr->data);
		curr = curr->next;
	}
	printf("\n");

	curr = sort_list (a, ascending);

	while (curr)
	{
		printf ("%d, ", curr->data);
		curr = curr->next;
	}
	printf("\n");
}