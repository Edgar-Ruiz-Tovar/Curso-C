// Ciclo While
// Realizar un programa que imprima los n�mero del 1 al 100
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=1;
	while(num<101) // mientras el valor de num sea menor que 101
	{
		printf("%i ",num); // imprimir� num
		num++; // e incrementar� una unidad a num 
		//num=num+1;
	}
	getch();
	return 0;
}
