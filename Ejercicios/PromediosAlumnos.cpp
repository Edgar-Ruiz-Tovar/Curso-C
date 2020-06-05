#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,j;
	float calificaciones[3],promedios[5],suma;
	for(i=0;i<5;i++)
	{
		suma=0;
		printf("Alumno %i\n",i+1);
		for(j=0;j<3;j++)
		{
			printf("\nIntroduce la calificacion %i: ",j+1);
			scanf("%f",&calificaciones[j]);
			suma=suma+calificaciones[j];
			fflush(stdin);
		}
		promedios[i]=suma;
		system("cls");
	}
	system("cls");
	for(i=0;i<5;i++)
		printf("El promedio del alumno %i es de: %f\n",i+1,promedios[i]/3);
	getch();
	return 0;
}
