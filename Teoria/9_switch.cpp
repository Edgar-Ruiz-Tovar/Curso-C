// Función switch(): nos sirve para tener diferentes casos y por tanto nos ayuda 
// a crear menús.
// Ejercicio: Hacer un programa que le pida al usuario introducir dos números y le
// abra un menú donde le de las opciones de sumarlos, restarlos, dividirlos o multiplicarlos.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int caso;
	float num1,num2;
	printf("Introduce un numero: \n");
	scanf("%f",&num1);
	printf("Introduce otro numero: \n");
	scanf("%f",&num2);
	system("cls"); // borra pantalla
	printf("Elige una opcion: \n");
	printf("1. Sumarlos\n");
	printf("2. Restarlos\n");
	printf("3. Multiplicarlos\n");
	printf("4. Dividirlos\n");
	scanf("%i",&caso);
	system("cls");
	switch(caso)
	{
		case 1:
			printf("La suma es %f+%f=%f",num1,num2,num1+num2);
			break;
		case 2:
			printf("La resta es %f-%f=%f",num1,num2,num1-num2);
			break;
		case 3:
			printf("La multiplicacion es %fx%f=%f",num1,num2,num1*num2);
			break;
		case 4:
			printf("La divison es %f/%f=%f",num1,num2,num1/num2);
			break;
	}
	getch();
	return 0;
}
