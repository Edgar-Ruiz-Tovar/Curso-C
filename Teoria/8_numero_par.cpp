#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Introduce un numero: \n");
	scanf("%i",&num);
	if(num%2==0)
		printf("Tu numero es par\n");
	else
		printf("Tu numero es non\n");
	getch();
	return 0;
}
