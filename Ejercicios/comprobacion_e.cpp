#include <stdio.h>
float interes(int n);
float elevar(float base,int exponente);
int main()
{
    int n;
    printf("Introduce el n%cmero de periodos de capitalizaci%cn: ",163,162);
    scanf("%i",&n);
    printf("%f",interes(n));

    return 0;
}
float interes(int n)
{
    return elevar(1.0+1.0/n,n);
}
float elevar(float base,int exponente)
{
	int i;
	float res=1;
	for(i=1;i<=exponente;i++)
		res=res*base;
	return res;
}
