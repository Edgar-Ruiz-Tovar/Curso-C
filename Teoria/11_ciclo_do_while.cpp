// Ciclo Do-While
// Realizar un programa que pida un n�mero y no se salga al menos que dicho n�mero
// sea mayor a 100
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	do{ // ejecutar� las siguientes l�neas
		printf("Introduce un numero: \n");
		scanf("%i",&num);
		system("cls");
	}while(num<=100); // mientras que num sea menor o igual a 100
	return 0;
}
/* Ejercicio: Pedir al usuario dos n�meros, borrar la pantalla y que a continuaci�n 
	  		  aparezca un men� de la siguiente manera:
	  		  
	  		  Elige una opci�n:
	  		  1. Sumar los n�meros.
	  		  2. Restar los n�meros.
	  		  3. Multiplicar los n�meros.
	  		  4. Dividir los n�meros.
	  		  5. Salir.
	  		  
	  		  El cual no se saldr� a menos que se elija la opci�n de salir.
*/
/* Ejercicio: Pedir al usuario que introduzca su nombre y que a continuaci�n 
	  		  aparezca un men� de la siguiente manera:
	  		  
	  		  Elige una opci�n:
	  		  1. Imprimir la primera letra.
	  		  2. Imprimir la �ltima letra.
	  		  3. Imprimir su nombre.
	  		  4. Salir.
	  		  
	  		  El cual no se saldr� a menos que se elija la opci�n de salir.
*/
