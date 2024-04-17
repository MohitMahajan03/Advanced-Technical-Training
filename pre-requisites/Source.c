/*
1)
Problem: you have been given a doubly linked list, rotate the linked list counter clock wise, Now in this scenario you will also be given a positive integer N using which you need to rotate the linked list counter clockwise.

This N will be smaller than the total numer of nodes in the linked list, which makes it valid to rotate the linked list counter clockwise.
*/
#include <stdio.h>
#include<stdlib.h>

struct linked_list
{
	int data;
	struct linked_list* right;
	struct linked_list* left;
};

struct linked_list* head = NULL;
struct linked_list* tail = NULL;

struct linked_list* insert(int in_data)
{
	struct linked_list* temp = (struct linked_list*)malloc(sizeof(struct linked_list));
	if ((head == NULL) && (temp != NULL))
	{
		head = temp;
		temp->data = in_data;
		head->left = NULL;
		head->right = NULL;
		tail = head;
	}
	else
	{
		if (temp != NULL)
		{
			temp->data = in_data;
			temp->left = tail;
			tail->right = temp;
			temp->right = NULL;
			tail = temp;
		}
	}
	return head;
}

struct linked_list* rotate(int n)
{
	struct linked_list* temp1 = tail;
	struct linked_list* temp2 = head;
	int temp;
	while (n != 0)
	{
		temp = tail->data;
		while (temp1 != head)
		{
			temp1->data = temp1->left->data;
			temp1 = temp1->left;
		}
		head->data = temp;
		temp1 = tail;
		printf("head = %d, tail = %d\n", head->data, tail->data);
		n--;
	}
	return head;
}

void display(struct linked_list* head)
{
	struct linked_list* temp = head;
	while (temp->right != NULL)
	{
		printf("%d-->", temp->data);
		temp = temp->right;
	}
	printf("%d\n", temp->data);
}

void main()
{
	int n, choice, data;
	while (1)
	{
		printf("1. insert, 2. rotate, 3. display, 4. exit\n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1: printf("Enter the data\n");
			scanf_s("%d", &data);
			head = insert(data);
			break;

		case 2: printf("Enter the number of shifts");
			scanf_s("%d", &n);
			head = rotate(n);
			break;
		case 3: display(head);
			break;
		case 4: exit(0);
		}
	}
	
}