#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


class  Vehiculo
{
	public:

		string brand ;
		string kindof ;
		float cc;
		int model;
		string color;

		Vehiculo(string id = "", string own ="")
		{
			setPlate(id);
			setOwner(own);
		}
		virtual void setColor(string s)
		{
			color = s;
		}
		string getColor()
		{
			return color;
		}
		void setPlate(string id)
		{
			idPlate = id;

		}
		void setOwner(string own)
		{
			owner = own;
			
		}
		string getPlate()
		{
			return idPlate;

		}
		string getOwner()
		{
			return owner;

		}
		void setBrand(string b)
		{
			brand = b;
		}

		void setKindof(string k)
		{
			kindof = k;
		}

		void setCC(float c)
		{
			cc = c;
		}

		void setModel(int m)
		{
			model = m;
		}

		string getBrand()
		{
			return brand;
		}

		string getKindof()
		{
			return kindof;
		}

		float getCC()
		{
			return cc;
		}

		int getModel()
		{
			return model;
		}


		~Vehiculo();

	private:
		string owner ;
		string idPlate;

};
//Vehiculo::Vehiculo(string id, string own)
//{
//	idPlate = id;
//	owner = own;
//}

 Vehiculo::~ Vehiculo()
{
	 
}



 class Bike : public Vehiculo
 {
	
 };

 class Car : public Vehiculo
 {
	 public:
		 string gas;
		 void setGas(string g){ gas = g; }
		 string getGas(){ return gas; }
 };

 class Military
 {
 public:
	 bool hasCaterpillar;

	 //Military();
	 Military(bool w =false, bool c = false);
	 void setWeapon(bool w){ hasWeapon = w; }
	 bool isWeapon(){ return hasWeapon; }
	 bool isCaterpillar(){ return hasCaterpillar; }

	 ~Military();

 private:
	 bool hasWeapon;
	 
 };
 Military::Military(bool w, bool c)
 {
	 hasWeapon = w;
	 hasCaterpillar = c;
 }

 Military::~Military()
 {
 }


 class WarTank: public Car, public Military
 {
 public:
	 WarTank(){};
	 void setCaterpilar(bool w){ hasCaterpillar = w; }
	 void setColor() { color = "red!!"; }
	 ~WarTank(){};

 private:

 };

 
int inheritance()
{
	Vehiculo car =   Vehiculo("dxw993","Leslie Brown");
	car.setBrand("Mazda");
	cout << "Brand: " << car.getBrand() << endl;
	cout << "Owner: " << car.getOwner() << endl;
	Bike moto;
	moto.setBrand("Honda");	
	cout <<"Brand: "<<moto.getBrand() << endl;
	cout << "Owner: " << moto.getOwner() << endl;
	moto.setPlate("asd236");
	moto.setOwner("Penny Dog");
	cout << "Owner: " << moto.getOwner() << endl;

	Car truck;
	truck.setPlate("qwe123");
	truck.setOwner("Snipi Cat");
	truck.setGas("Gasoline");
	cout << "Owner: " << truck.getOwner() << endl;
	cout << "Gas: " << truck.getGas() << endl;
	car.setColor("black");
	cout << "Color: " << car.getColor() << endl;

	WarTank Tank ;//= Military(true,true);
	Tank.setPlate("zxc456");
	Tank.setOwner("Kedi Cat");
	Tank.setGas("Diesel");
	Tank.setBrand("Habrahams");
	Tank.setWeapon(true);
	Tank.setCaterpilar(true);
	cout << "Owner: " << Tank.getOwner() << endl;
	cout << "Gas: " << Tank.getGas() << endl;
	cout << "Is gunship: " << Tank.isWeapon() << endl;
	//Tank.setColor("blue");
	Tank.setColor();
	cout << "Color: " << Tank.getColor() << endl;

	Vehiculo *hummer = new WarTank;
	hummer->setColor("white");
	cout << "hummer Color: " << hummer->getColor() << endl;
	//car.insertData("mazda","mx-5",2000.0f,2011);

	//
	//delete car;
	//printf("brand car %s",car.brand);

	cin.get();
	return 0;
}
