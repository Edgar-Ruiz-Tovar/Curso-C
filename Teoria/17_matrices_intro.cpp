/*
Una  
Crear un programa que imprima la matriz identidad 4x4*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c;
	int id[4][4]={
			       {1,0,0,0},
			       {0,1,0,0},
				   {0,0,1,0},
				   {0,0,0,1}
				 };
	for(r=0;r<4;r++)
	{
		for(c=0;c<4;c++)
			printf("%i ",id[r][c]);
		printf("\n");
	}
	getch();
	return 0;
}

