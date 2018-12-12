#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct node
{
	int num;
	node *next, *prev;
}node;

node *head = NULL;
node *tmp = NULL;

void add(node *new_node)
{
	if (head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		head = new_node;
		tmp = head;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
	}
}
void printlist(node *head)
{
	node *tmp = head;
	int i = 1;
	puts("The list:");

	if (tmp == NULL)
		puts("The list is empty");
	else
	{
		while (tmp != NULL)
		{
			printf("%d)--> val: %d\tnext--> %p\tprev--> %p\n",i, tmp->num, tmp->next, tmp->prev);
			tmp = tmp->next;
			i++;
		}
	}
}
void main()
{
	int i;
	srand(time(NULL));

	for (i = 0; i < 9; i++)
	{
		node *new_node;
		new_node = (node*)malloc(sizeof(node));
		new_node->num = rand() % 20 + 1;
		add(new_node);
	}
	printlist(head);

	getchar();
	getchar();
}
