#include<stdio.h>
#include<conio.h>
int mover(char direccion,int coordenada[2]);
int main()
{
	int inicio[2]={0,0};
	printf("(%i,%i)\n",inicio);
	*inicio=
	printf("(%i,%i)\n",mover('w',inicio));
	/*printf("(%i,%i)\n",mover('a',inicio));
	printf("(%i,%i)\n",mover('s',inicio));*/
	return 0;
	
}
int mover(char direccion,int coordenada[2])
{
	int nueva_coordenada[2];
	strcpy(nueva_coordenada,coordenada);
	if(direccion=='w')      // arriba
		coordenada[1]+=1;
	else if(direccion=='s') // abajo
		coordenada[1]-=1;
	else if(direccion=='d') // derecha
		coordenada[0]+=1;
	else                    // izquierda
		coordenada[0]-=1;
	return *coordenada;
		
}
