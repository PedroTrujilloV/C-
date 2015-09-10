//Sample linked Binary BFTree c++
//Pedro Enrique Trujillo


#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue> //// nescesary to create queue


using namespace std;

class Node
{
public:
	int data;
	Node * Left;
	Node * Right;

	Node();
	Node(int d){ data = d; };
	~Node();

private:

};

class BFTree
{
public:

	Node* Root;
	BFTree();
	~BFTree();

	Node * Insert(int x, Node* NewNode = NULL);
	bool BSearch(int x, Node * DataNode = NULL);
	void BFSearch(Node * DataNode = NULL);
private:

};

BFTree::BFTree()
{
	Root = NULL;
}

BFTree::~BFTree()
{
}

Node * BFTree::Insert(int x, Node* NewNode )
{

	if (NewNode == NULL)
	{
		NewNode = new Node(x);
		NewNode->Right = NewNode->Left = NULL;
	}
	else if (x >= NewNode->data)
	{
		cout << "Right"<<endl;
		NewNode->Right = Insert(x, NewNode->Right);
	}
	else
	{
		cout << "Left" << endl;
		NewNode->Left = Insert(x,NewNode->Left);
	}

	return NewNode;
}

bool BFTree::BSearch(int x, Node * DataNode)
{
	if (DataNode == NULL)
	{
		cout << "Not found or Empty BFTree!" << endl;
		return false;
	}
	else if (x > DataNode->data)
	{
		 BSearch(x, DataNode->Right);
	}
	else if (x < DataNode->data)
	{
		 BSearch(x, DataNode->Left);
	}
	else
	return true;
}
void BFTree::BFSearch(Node * DataNode)
{
	if (DataNode == NULL)
	{
		return;
	}
	queue<Node*> Queue;
	Queue.push(DataNode);

	while (!Queue.empty())
	{
		Node * current = Queue.front();
		cout << "Data: " << current->data << endl;

		if (current->Left != NULL) Queue.push(current->Left);
		if (current->Right != NULL) Queue.push(current->Right);
		Queue.pop();
	}
}

int BFSTree()//Change for main
{
	Node * root = new Node(11);

	BFTree * ArbolB = new BFTree();

	ArbolB->Insert(20, root);
	ArbolB->Insert(5, root);
	ArbolB->Insert(15, root);
	ArbolB->Insert(2, root);;
	ArbolB->Insert(9, root);
	ArbolB->Insert(12, root);
	ArbolB->Insert(7, root);
	ArbolB->Insert(14, root);
	ArbolB->Insert(3, root);

	ArbolB->BFSearch(root);
	

	//cout << true&&false;

	cin.get();
	return 0;
}