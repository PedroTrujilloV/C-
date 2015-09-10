//practice of abstracts clases
//Pedro Trujillo



#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class Mamifero
{
public:
	Mamifero();
	~Mamifero();
	virtual void comer() const = 0;
	virtual void cagar() const = 0;
	virtual void dormir() const = 0;
	virtual void hablar() const = 0;

private:

};

Mamifero::Mamifero()
{

}

Mamifero::~Mamifero()
{
}
class Pet : public Mamifero
{
public:
	Pet();
	~Pet();
	string Name;
	virtual void setName(string n){ Name = n; }
	virtual string getName(){ return Name; }
	/*virtual void comer(){};
	virtual void cagar(){};
	virtual void dormir(){};
	virtual void hablar(){};*/

private:

};

Pet::Pet()
{
	cout << "Create pet" << endl;
}

Pet::~Pet()
{
	cout << "Kill pet" << endl;
}

class Cat: public Pet
{
public:
	Cat();
	~Cat();
	void comer()const
	{
		cout << "Cat is eating mice" << endl;
	}
	void cagar()const
	{
		cout << "Cat making horrible shit" << endl;
	}
	void dormir()const
	{
		cout << "Cat doing his best excercise" << endl;
	}
	void hablar()const
	{
		cout << "Cat: Miauuuu!" << endl;
	}
	void play()const
	{
		cout << "Cat trying catch the laser lol" << endl;
	}
private:

};

Cat::Cat()
{
	cout << "cat :3" << endl;
}

Cat::~Cat()
{
	cout << "cat X3" << endl;
}

class Dog: public Pet
{
public:
	Dog();
	~Dog();
	void comer()const
	{
		cout << "Dog is eating cat poo" << endl;
	}
	void cagar()const
	{
		cout << "Dog making shit inside home.." << endl;
	}
	void dormir()const
	{
		cout << "Dog is waiting mom" << endl;
	}
	void hablar()const
	{
		cout << "Dog: Guau!! Guau!!" << endl;
	}
	void bagging()const
	{
		cout << "Dog is bagging food lol" << endl;
	}
private:

};

Dog::Dog()
{
	cout << "dog :.P" << endl;
}

Dog::~Dog()
{
	cout << "dog X.P" << endl;
}

int abstract()
{
	
	Pet *pMasc = 0;
	int eleccion;

	while (1)
	{
		bool exit = false;
		cout << "Digite opcion: (1) perro, (2) gato, (0) salir: " << endl;
		cin >> eleccion;
		switch (eleccion)
		{
		case 0:
			exit = true;
			break;
		case 1:
			pMasc = new Dog;
			pMasc->setName("Penny");
			break;
		case 2:
			pMasc = new Cat;
			pMasc->setName("Snipy & Kedi");
			break;
		}

		if (exit)
		{
			break;
		}
		pMasc->getName();
		pMasc->comer();
		pMasc->cagar();
		pMasc->dormir();
		pMasc->hablar();
	}

	delete pMasc;

	cin.get();
	return 0;
}