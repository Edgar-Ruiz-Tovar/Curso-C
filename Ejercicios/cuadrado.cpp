// hacer un programa que con el uso de ciclos imprima lo siguiente
/*               * * * *
				 * * * *
				 * * * *
				 * * * *
				 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,numero;
	printf("Introduce un numero: \n");
	scanf("%i",&numero);
	for(i=0;i<numero;i++) // for que imprime las líneas
	{
		for(j=0;j<numero;j++) // for que imprime cada línea
			printf("* ");
		printf("\n");
	}
	return 0;
}
