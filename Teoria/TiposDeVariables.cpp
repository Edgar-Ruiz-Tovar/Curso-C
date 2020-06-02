/*  Variables
	En programación las variables hacen dos cosas:
	1. Nos reservan un espacio en la memoria.
	2. Le asignan un nombre a dicho espacio.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int entero;
	float decimal;
	double doble_precision;
	char caracter;
	// Variable Entera
	printf("Introduce un numero entero: \n");
	scanf("%i",&entero);
	printf("Tu numero entero es: %i\n\n",entero);
	
	// Variable flotante
	printf("Introduce un numero decimal: \n");
	scanf("%f",&decimal);
	printf("Tu numero decimal es: %f\n\n",decimal);
	
	// Varible doble
	printf("Introduce otro numero decimal: \n");
	scanf("%lf",&doble_precision);
	printf("Tu numero decimal es: %e\n\n",doble_precision);
	fflush(stdin);  // limpia el buffer
	
	// Variable caracter
	printf("Introduce una letra: \n");
	scanf("%c",&caracter);
	printf("Tu letra es: %c\n\n",caracter);
	
	getch();
	return 0;
}
