/* Funciones I
Usaremos funciones cuando notemos que haya un proceso muy repetitivo en nuestros programas y 
cuando queramos simplificar por partes ciertas tareas.
Esquema General de una función
tipo_de_dato nombre_función(parámetros)
{
	instrucciones
	valor de retorno (en caso de que retorne algo)
}
Función con retorno
El día de hoy crearemos una función que dados dos números los sume.
*/
#include<stdio.h>
#include<conio.h>
int suma(int a,int b); // declaramos la función
int main()
{
	int num1,num2;
	printf("Introduce un numero: ");
	scanf("%i",&num1);
	printf("Introduce otro : ");
	scanf("%i",&num2);
	// nos imprime el entero que regresa la función suma
	printf("La suma es: %i",suma(num1,num2));
	getch();
	return 0;
}
// la función recibirá dos números y regresará la suma de ellos.
int suma(int a,int b) // regresa un entero y recibe dos
{
	return a+b; //regresará la suma de los parámetros
}
