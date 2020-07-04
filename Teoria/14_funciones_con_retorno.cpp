/* Funciones I
Usaremos funciones cuando notemos que haya un proceso muy repetitivo en nuestros programas y 
cuando queramos simplificar por partes ciertas tareas.
Esquema General de una funci�n
tipo_de_dato nombre_funci�n(par�metros)
{
	instrucciones
	valor de retorno (en caso de que retorne algo)
}
Funci�n con retorno
El d�a de hoy crearemos una funci�n que dados dos n�meros los sume.
*/
#include<stdio.h>
#include<conio.h>
int suma(int a,int b); // declaramos la funci�n
int main()
{
	int num1,num2;
	printf("Introduce un numero: ");
	scanf("%i",&num1);
	printf("Introduce otro : ");
	scanf("%i",&num2);
	// nos imprime el entero que regresa la funci�n suma
	printf("La suma es: %i",suma(num1,num2));
	getch();
	return 0;
}
// la funci�n recibir� dos n�meros y regresar� la suma de ellos.
int suma(int a,int b) // regresa un entero y recibe dos
{
	return a+b; //regresar� la suma de los par�metros
}
