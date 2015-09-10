//Sample linked Binary DFSTree c++
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

class DFTree
{
public:

	Node* Root;
	DFTree();
	~DFTree();

	Node * Insert(int x, Node* NewNode = NULL);
	bool BSearch(int x, Node * DataNode = NULL);
	void BFSearch(Node * DataNode = NULL);
	void PreOrder(Node * DataNode = NULL);
	void InOrder(Node * DataNode = NULL);
	void PosOrder(Node * DataNode = NULL);


private:

};

DFTree::DFTree()
{
	Root = NULL;
}

DFTree::~DFTree()
{
}

Node * DFTree::Insert(int x, Node* NewNode)
{

	if (NewNode == NULL)
	{
		NewNode = new Node(x);
		NewNode->Right = NewNode->Left = NULL;
	}
	else if (x >= NewNode->data)
	{
		cout << "Right" << endl;
		NewNode->Right = Insert(x, NewNode->Right);
	}
	else
	{
		cout << "Left" << endl;
		NewNode->Left = Insert(x, NewNode->Left);
	}

	return NewNode;
}

bool DFTree::BSearch(int x, Node * DataNode)
{
	if (DataNode == NULL)
	{
		cout << "Not found or Empty DFTree!" << endl;
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
void DFTree::BFSearch(Node * DataNode)
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


void DFTree::PreOrder(Node * DataNode) //root - left - right
{
	if (DataNode == NULL)
	{
		return;
	}

	cout << "Data: " << DataNode->data << endl;//root
		
	PreOrder(DataNode->Left);//left
		
	PreOrder(DataNode->Right);//right
}
void DFTree::InOrder(Node * DataNode) //left - root -  right
{
	if (DataNode == NULL)
	{
		return;
	}

	InOrder(DataNode->Left);//left

	cout << "Data: " << DataNode->data << endl;//root
	
	InOrder(DataNode->Right);//right
}
void DFTree::PosOrder(Node * DataNode) //left  -  right - root
{
	if (DataNode == NULL)
	{
		return;
	}

	PosOrder(DataNode->Left);//left

	PosOrder(DataNode->Right);//right

	cout << "Data: " << DataNode->data << endl;//root

}

int main()
{
	Node * root = new Node(11);

	DFTree * ArbolB = new DFTree();
	ArbolB->Insert(20, root);
	ArbolB->Insert(5, root);
	ArbolB->Insert(15, root);
	ArbolB->Insert(2, root);;
	ArbolB->Insert(9, root);
	ArbolB->Insert(12, root);
	ArbolB->Insert(7, root);
	ArbolB->Insert(14, root);
	ArbolB->Insert(3, root);

	cout << "PreOrder: " << endl;
	//ArbolB->PreOrder(root);
	cout << "InOrder: " << endl;
	ArbolB->InOrder(root);
	cout << "PosOrder: " << endl;
	ArbolB->PosOrder(root);
	//cout << true&&false;

	cin.get();
	return 0;
}