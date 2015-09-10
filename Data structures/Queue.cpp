//Sample linked Queue c++
//Pedro Enrique Trujillo


#include <iostream>
#include <stdio.h>
#include <string.h>

struct Node
{
	int data;
	struct Node * next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

using namespace std;

void Enqueue(int x)
{
	struct Node* temp = (struct Node *) malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if (front == NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}

	rear->next = temp;
	rear = temp;
}

void Unenqueue()
{
	struct Node* temp = front;
	if (front == NULL)
		return;
	if (front  == rear)
	{
		rear = front = NULL;
	}
	else
	{
		front = front->next;
	}
	
	free(temp);
}


int Queue()//replace for main
{
	

	cin.get();
	return 0;
}