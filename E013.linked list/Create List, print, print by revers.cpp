#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
	int val;
	node *next, *prev;

}node;

node *add(node *head, int key)
{
	node *tmp = NULL;
	tmp = (node*)malloc(sizeof(node));
	tmp->val = key;

	tmp->next = head;

	return tmp; // return full list to the main;
}
void print(node *head)
{
	node *tmp = head;

	if (tmp == NULL)
		printf("The List is emptey!\n");
	else
	{
		while (tmp != NULL)
		{
			printf("%d, ", tmp->val);
			tmp = tmp->next;
		}
	}
}
void Cnt_list(node *head)
{
	int cnt = 0;
	node *tmp = head;

	while (tmp) // if tmp != NULL
	{
		cnt++;
		tmp = tmp->next;
	}
	printf("\n\nCnt of list: %d\n", cnt);
}
void revers(node *head)
{
	node *tmp = head;
	if (head)
	{
		revers(head->next);
		printf("%d, ", head->val);
	}
	else
		return;
}
void freeList(node *head)
{
	node *tmp = NULL;

	if (head == NULL)     // Checking if the list not empty
		puts("The List is empty!");

	else                 // else remove by varbel temp; 
	{
		tmp = head;
		while (tmp)
		{
			head = head->next;
			tmp->next = NULL;
			free(tmp);
			tmp = head;
		}
	}
}

void main()
{
	srand(time(NULL));
	node *head = NULL, *tmp = NULL;
	int i = 0, key;

	// Fill the list 1 way:
	/*
	head = (node*)malloc(sizeof(node));
	head->val = 100;				// or scanf("%d", &head->val);

	head->next = (node*)malloc(sizeof(node));
	head->next->val = 200;		   // or scanf("%d", &head->next->val);

	head->next->next = (node*)malloc(sizeof(node));
	head->next->next->val = 300;  // or scanf("%d", &head->next->next->val);

	printf("%d, ", head->val);					// output 100->next
	printf("%d, ", head->next->val);		   // output 100-> 200->next
	printf("%d, ", head->next->next->val);	  // output 100-> 200-> 300->next
	*/

	/*
	// Fill the list 2 way:

	while (i < 4)
	{
	tmp = (node*)malloc(sizeof(node)); // search free free memory
	printf("Enter key %d:\n", i + 1);

	// tmp->val = rand() % 10;

	scanf("%d", &key);
	tmp->val = key;

	if (head == NULL)
	{
	head = tmp;
	head->next = NULL;
	}
	else
	{
	tmp->next = head;
	head = tmp;
	}
	i++;
	}
	*/

	
	// Fill the list 3 way:

	printf("Enter key: Press -1 to finish The insert\n");
	scanf("%d", &key);

	while (key != -1)
	{
	head = add(head, key);  // send to function add

	printf("Enter key: Press -1 to finish The insert\n");
	scanf("%d", &key);
	}
	


	system("CLS");
	print(head);		 // print the list
	Cnt_list(head);		// counter of the list
	printf("\nrevers:\n");
	revers(head);		// print the list revers
	freeList(head);		// delet list

	getchar();
	getchar();
}