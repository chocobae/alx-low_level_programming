#include "lists.h"

struct node
{
	int data;
	struct node *link;
};

struct node *rev_list(struct node *head)
{
	struct node *temp = NULL;
	struct node *temp2 = NULL;

	while (head != NULL)
	{
		temp2 = head->link;
		head->link = temp;
		temp = head;
		head = temp2;
	}
	head = temp;
	return (head);
}
int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	struct node *ptr = head;

	head->data = 45;
	head->link = NULL;
	head->link = malloc(sizeof(struct node));
	head->link->data = 98;
	head->link->link = NULL;
	head->link->link = malloc(sizeof(struct node));
	head->link->link->data = 3;
	head->link->link->link = NULL;


	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}

	printf("\n");
	ptr = rev_list(head);
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}

	return (0);
}
