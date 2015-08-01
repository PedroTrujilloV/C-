#include <stdio.h>
#include <conio.h>
main()
{

   int n1 = 0;
   int n2 = 0;
   int res = 0;
   int opc = 0;
   
    printf("Programa para suma de numeros\n");
    getch();
    printf("\nDigite primer numero: ");
    scanf("%i", & n1);  //escaneo lo que viene del teclado
    printf("\nDigite segundo numero: ");
    scanf("%i", & n2);
    
    res = n1 + n2; //averiguo la suma
    
    if(res %2==0)    //determino la paridad del resultado
    printf("\nel resultado es par");
    else
    printf("\nel resultado es impar");
    getch();
     
    printf("\nla respuesta es: %i", res);
    getch();
    
    printf("\n Que mas desea?");
    printf("\n opcion 1 sumar otro numero");
    printf("\n opcion 2 restar otro numero");
    printf("\n opcion 3 multiplicar por otro numero");
    printf("\n opcion 4 dividir por otro numero");
    scanf("%i", & opc);
    getch();
    switch(opc)
    {
               case 1:
                    printf("numero es cero");
               break;
               case 2:
                    printf("numero es menor que cero");
               break;
               case 3:
                    printf("numero es menor que cero");
               break;
               case 4:
                    printf("numero es menor que cero");
               break;
               default:
               break;
    }
}
