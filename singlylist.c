#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct Node
{
	char n;
	struct Node *next;
}*head;

void addnode(char data)
{
	struct Node *temp = malloc(sizeof(struct Node));
       	temp->next = head;
	temp->n = data;
	head = temp;
}

void traverse(struct Node *temp)
{
	int count = 1;
	while (temp->next != NULL)
	{
		printf("Node %d = %c\n",count,temp->n);
		temp = temp->next;
		count++;
	}
}

int main()
{
	head->next = NULL;
	addnode('a');
	addnode('b');
	addnode('c');
	traverse(head);
}




