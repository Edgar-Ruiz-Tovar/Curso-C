#include<stdio.h>
struct coordenada{
	int x;
	int y;
};
coordenada mover (coordenada p,char m);
int main()
{
	int i;
	coordenada punto;
	punto.x=0;
	punto.y=0;
	char movimientos[5]={'w','w','d','s','a'};
	printf("(%i,%i)\n",punto.x,punto.y);
	for(i=0;i<5;i++)
	{
		punto=mover(punto,movimientos[i]);
		printf("(%i,%i)\n",punto.x,punto.y);
	}
	
}
coordenada mover (coordenada p,char m)
{
	
	if(m=='w')
		p.y+=1;
	else if(m=='s')
		p.y-=1;
	else if(m=='d')
		p.x+=1;
	else
		p.x-=1;
	return p;
}
