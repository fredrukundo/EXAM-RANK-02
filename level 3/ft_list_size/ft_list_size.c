#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int count = 0;
	while (begin_list != NULL)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
int ft_list_size2(t_list *begin_list)
{
	if(begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size2(begin_list->next));	
}

int main()
{
	int size = 0;
	int size2 = 0;
	t_list	*head = malloc(sizeof(t_list));
	t_list	*second = malloc(sizeof(t_list));
	t_list *third = malloc(sizeof(t_list));

	head->data = (void *)1;
	head->next = second;

	second->data = (void *)2;
	second->next = third;

	third->data = (void *)3;
	third->next = NULL;

	size = ft_list_size(head);
	size2 = ft_list_size2(head);

	printf("size: %d\n", size);
	printf("size2: %d\n", size2);

	free(head);
	free(second);
	free(third);

	return (0);
}