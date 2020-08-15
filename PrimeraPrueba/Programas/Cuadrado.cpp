#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define uAcento 163
int main()
{
	int i,j,number;
	printf("Introduce un n%cmero entero: \n",uAcento);
	scanf("%i",&number);
	system("cls");
	for(i=0;i<number;i++)
	{
		for(j=0;j<number;j++)
		{
			if(i==0 || i==number-1 || j==0 || j==number-1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
