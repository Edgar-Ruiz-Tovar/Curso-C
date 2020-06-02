// Ciclo Do-While
// Realizar un programa que pida un número y no se salga al menos que dicho número
// sea mayor a 100
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	do{ // ejecutará las siguientes líneas
		printf("Introduce un numero: \n");
		scanf("%i",&num);
		system("cls");
	}while(num<=100); // mientras que num sea menor o igual a 100
	return 0;
}
/* Ejercicio: Pedir al usuario dos números, borrar la pantalla y que a continuación 
	  		  aparezca un menú de la siguiente manera:
	  		  
	  		  Elige una opción:
	  		  1. Sumar los números.
	  		  2. Restar los números.
	  		  3. Multiplicar los números.
	  		  4. Dividir los números.
	  		  5. Salir.
	  		  
	  		  El cual no se saldrá a menos que se elija la opción de salir.
*/
/* Ejercicio: Pedir al usuario que introduzca su nombre y que a continuación 
	  		  aparezca un menú de la siguiente manera:
	  		  
	  		  Elige una opción:
	  		  1. Imprimir la primera letra.
	  		  2. Imprimir la última letra.
	  		  3. Imprimir su nombre.
	  		  4. Salir.
	  		  
	  		  El cual no se saldrá a menos que se elija la opción de salir.
*/
