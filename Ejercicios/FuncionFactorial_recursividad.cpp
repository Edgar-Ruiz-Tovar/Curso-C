#include <stdio.h>
int factorial(int n);
void combinatoria(int n,int k);
int main()
{
	int n,k;
    printf("Numero de elementos totales: ");
    scanf("%i",&n);
    printf("Numero de subconjuntos: ");
    scanf("%i",&k);
    combinatoria(n,k);
    return 0;
}

int factorial(int n)
{
	// me va guardando la multiplicación
    int res;
    if(n>0)
    {
    	res=n;
    	if(n>1)
        	res=res*factorial(n-1);
    	else
        	return res;
    }
    else 
    	return 1;
}

void combinatoria(int n,int k)
{
	printf("Las combinaciones de %i en %i son: %i",n,k,factorial(n)/(factorial(n-k)*factorial(k)));
}
