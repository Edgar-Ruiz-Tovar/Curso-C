// Repaso if-else 
// Recibe un número entero y nos dice si es mayor o menor a 5.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Introduce un n%cmero entero: \n",163);
	scanf("%i",&num);
	if(num>5) // si el número es mayor a 5
		printf("Tu n%cmero es mayor a 5.",163);
	else if(num==5)
		printf("Tu n%cmero es 5.",163);
	else
		printf("Tu n%cmero es menor a 5.",163);
	getch();
	return 0;
}
