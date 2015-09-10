//Sample linked Binary BTree c++
//Pedro Enrique Trujillo


#include <iostream>
#include <stdio.h>
#include <string.h>


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

class BTree
{
public:

	Node* Root;
	BTree();
	~BTree();

	Node * Insert(int x, Node* NewNode = NULL);
	bool BSearch(int x, Node * DataNode = NULL);
private:

};

BTree::BTree()
{
	Root = NULL;
}

BTree::~BTree()
{
}

Node * BTree::Insert(int x, Node* NewNode)
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

bool BTree::BSearch(int x, Node * DataNode)
{
	if (DataNode == NULL)
	{
		cout << "Not found or Empty BTree!!" << endl;
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

int BinaryBTree()//change for main
{
	Node * root = new Node(11);

	BTree * ArbolB = new BTree();

	ArbolB->Insert(20, root);
	ArbolB->Insert(5, root);
	ArbolB->Insert(15, root);
	ArbolB->Insert(2, root);;
	ArbolB->Insert(9, root);
	ArbolB->Insert(12, root);
	ArbolB->Insert(7, root);
	ArbolB->Insert(14, root);
	ArbolB->Insert(3, root);

	/*ArbolB->Insert(11,ArbolB->Root);
	ArbolB->Insert(20, ArbolB->Root);
	ArbolB->Insert(5, ArbolB->Root);
	ArbolB->Insert(15, ArbolB->Root);
	ArbolB->Insert(2, ArbolB->Root);
	ArbolB->Insert(9, ArbolB->Root);
	ArbolB->Insert(12, ArbolB->Root);
	ArbolB->Insert(7, ArbolB->Root);
	ArbolB->Insert(14, ArbolB->Root);
	ArbolB->Insert(3, ArbolB->Root);*/

	cout << "Is (0) in Binary BTree?" << ArbolB->BSearch(0, root) << endl;
	cout << "Is (3) in Binary BTree?" << ArbolB->BSearch(3, root) << endl;
	cout << "Is (11) in Binary BTree?" << ArbolB->BSearch(11, root) << endl;


	//cout << true&&false;

	cin.get();
	return 0;
}