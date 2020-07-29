// Ordenamiento burbuja
// Realizar un programa que pida al usuario 5 números y los ordene de menor a mayor
#include<stdio.h>
#include<conio.h>
int main()
{
	int num[5],i,aux;
	// guardamos los números
	for(i=0;i<5;i++)
	{
		printf("Introduce un n%cmero: ",163);
		scanf("%i",&num[i]);
	}
	// realizamos el el algoritmo del ordenamiento burbuja
	for(i=0;i<5;i++)
	{
		if(num[i]>=num[i+1])
		{
			// la variable aux nos servirá para hacer el cambio de valores
			aux=num[i+1];
			num[i+1]=num[i];
			num[i]=aux;
		}
	}
	// los imprimimos para corroborar
	for(i=0;i<5;i++)
		printf("%i ",num[i]);
	getch();
	return 0;
}
