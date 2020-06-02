// Ciclo While
// Realizar un programa que imprima los número del 1 al 100
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=1;
	while(num<101) // mientras el valor de num sea menor que 101
	{
		printf("%i ",num); // imprimirá num
		num++; // e incrementará una unidad a num 
		//num=num+1;
	}
	getch();
	return 0;
}
