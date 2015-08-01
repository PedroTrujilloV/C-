class Punto
{
      public:
             float x;
             float y;
      
      Punto() : x(2), y(3)
      {
      }
              
};


#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    Punto miPunto;
    
    cout<<"Coord X: "<<miPunto.x<<endl;
    cout<<"Coord Y: "<<miPunto.y<<endl;
    
    getchar();
}
