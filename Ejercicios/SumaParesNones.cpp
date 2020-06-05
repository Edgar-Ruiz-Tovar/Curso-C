#include<stdio.h>
#include<conio.h>
int main()
{
	int i,suma_pares=0,suma_nones=0;
	for(i=1;i<101;i++)
	{
		if(i%2==0)
			suma_pares=suma_pares+i;//2,2+4,6+6
		else
			suma_nones=suma_nones+i; //1, 1+3,4+5
	}
	printf("La suma de los pares es: %i\n",suma_pares);
	printf("La suma de los nones es: %i\n",suma_nones);
	getch();
	return 0;
}
