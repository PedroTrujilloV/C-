#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Node
{
	int data;
	struct Node* next;

};

struct Node * head;

void Insert(int x)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;

}
void Print()
{
	struct Node * temp = head;
	printf("List is: ");
	while (temp != NULL)
	{
		printf(" %d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}



int Stack_struct()//replace for main
{
	head = NULL;

	printf("How many number?\n");
	int n, i, x;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the number:\n");
		scanf_s("%d", &x);
		Insert(x);
		Print();
	}
	return 0;
	cin.get();
	
}