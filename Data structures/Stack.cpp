#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

class Nodo
{
public:
	int data;
	Nodo * link;
	//Nodo();
	Nodo(int d =0, Nodo * l = NULL);
	~Nodo();
	void setLink( Nodo * l) { link = l; }
	void setValue(int d){ data = d; }
	
	Nodo * getLink(){ return link; }
	int getData(){ return data; }

private:


};

Nodo::Nodo(int d, Nodo * l)
{
	setLink(l);
	setValue(d);
}

Nodo::~Nodo()
{
}

class Stack: public Nodo
{
public:

	Nodo* Pila;
	Stack();
	~Stack();
	void Push(int d = 0);
	void LenStack();
	
private:

};

Stack::Stack()
{
	Pila = NULL;
}

Stack::~Stack()
{
}

void Stack::Push(int d)
{
	Nodo * nuevo = new Nodo(d, Pila);
	Pila = nuevo;
}

void Stack::LenStack()
{
	cout << "Stack" << endl;
	Nodo * pila = Pila;
	cout << "|---- data: " << pila->getData() << endl;
	while (pila->getLink()!=NULL)
	{
		pila = pila->getLink();
		cout << "|---- data: " << pila->getData() << endl;
	}
	
}
int Stacks()//replace for main
{
	Stack stack;
	int number;
	cout << "Stack -- Insert numeric integer data or (0) to exit" << endl;
	while (true)
	{
		cout << "Insert  data:" << endl;
		cin >> number;
		if (number == 999)
		{
			break;
		}
		if (number == 0)
		{
			break;
		}
		else
		{
			stack.Push(number);
		}

	}
	if (number == 999)
	{
		cout << "Your stack is: \n" << endl;
		stack.LenStack();
	}

	cin.get();
	cin.get();
	return 0;
}