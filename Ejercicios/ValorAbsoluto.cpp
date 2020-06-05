#include<stdio.h>
#include<conio.h>
int main()
{
	float num;
	printf("Introduce un numero: \n");
	scanf("%f",&num);
	if(num>=0)
		printf("El valor absoluto es: %f",num);
	else
		printf("El valor absoluto es: %f",num*(-1));
	getch();
	return 0;	
}
