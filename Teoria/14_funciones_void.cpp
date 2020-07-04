/* Funciones II
Ahora haremos una función que dados dos números los sume e imprima el resultado
*/
#include<stdio.h>
#include<conio.h>
void suma(int a,int b); // es de tipo void porque no regresa nada
int main()
{
	int num1,num2;
	printf("Introduce un numero: ");
	scanf("%i",&num1);
	printf("Introduce otro : ");
	scanf("%i",&num2);
	suma(num1,num2); // mandamos llamar la función sumar
	getch();
	return 0;
}
void suma(int a,int b)
{
	printf("La suma es: %i",a+b); // la función imprimirá la suma de los parámetros
}
