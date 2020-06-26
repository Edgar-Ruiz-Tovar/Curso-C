#include<stdio.h>
#include<conio.h>
int main()
{
	int num1;
	printf("Introduce un numero entero: \n");
	scanf("%i",&num1); // ejemplo num1=5
	printf("%i x %i = %i\n",num1,2,num1*2); // entonces imprime num1 x 2 =num1*2 que es 5 x 2 = 10
	printf("%i + 10 = %i",num1,num1+10);// 5 + 10 = 15
	getch();
	return 0;
}
