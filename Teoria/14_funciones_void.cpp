/* Funciones II
Ahora haremos una funci�n que dados dos n�meros los sume e imprima el resultado
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
	suma(num1,num2); // mandamos llamar la funci�n sumar
	getch();
	return 0;
}
void suma(int a,int b)
{
	printf("La suma es: %i",a+b); // la funci�n imprimir� la suma de los par�metros
}
