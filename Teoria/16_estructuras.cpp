#include<stdio.h>
struct coordenada{
	int x;
	int y;
};
int main()
{
	coordenada punto;
	printf("Introduce la coordenada x: ");
	scanf("%i",&punto.x);
	printf("Introduce la coordenada y: ");
	scanf("%i",&punto.y);
	printf("La coordenada es: (%i,%i)",punto.x,punto.y);
	return 0;
} 
