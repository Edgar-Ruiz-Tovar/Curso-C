/* Hacer un programa que dado un número del 1 al 7 me imprima a cuál día de la semana corresponde
	Nota: Teniendo en cuenta que la semana inicia el lunes*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Introduce un n%cmero: ",163);
	scanf("%i",&num);
	if(num==1)
		printf("El d%ca es Lunes",161);
	else if(num==2)
		printf("El d%ca es Martes",161);
	else if(num==3)
		printf("El d%ca es Mi%crcoles",161,130);
	else if(num==4)
		printf("El d%ca es Jueves",161);
	else if(num==5)
		printf("El d%ca es Viernes",161);
	else if(num==6)
		printf("El d%ca es S%cbado",161,160);
	else if(num==7)
		printf("El d%ca es Domingo",161);
	else
		printf("N%cmero no v%clido",163,160);
	return 0;
}
