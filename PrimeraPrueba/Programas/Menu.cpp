/* Ejercicio: Pedir al usuario dos números, borrar la pantalla y que a continuación 
	  		  aparezca un menú de la siguiente manera:
	  		  
	  		  Elige una opción:
	  		  1. Sumar los números.
	  		  2. Restar los números.
	  		  3. Multiplicar los números.
	  		  4. Dividir los números.
	  		  5. Salir.
	  		  
	  		  El cual no se saldrá a menos que se elija la opción de salir.
*/
#define aAcento 160 //
#define iAcento 161 //  
#define oAcento 162 //  Para los acentos y ñ
#define uAcento 163 //
#define ene 164     //
#define eAcento 130 //
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int caso, i;
	float numeros[2]; // Para guardar los dos números
	for(i=0;i<2;i++) 
	{
		printf("Introduce un n%cmero: \n",uAcento);
		scanf("%f",&numeros[i]);	
	}
	do{
		system("cls");
		printf("Elige una opci%cn:\n",oAcento);
		printf("1. Sumar los n%cmeros\n",uAcento);
		printf("2. Restar los n%cmeros\n",uAcento);
		printf("3. Multiplicar los n%cmeros\n",uAcento);
		printf("4. Dividir los n%cmeros\n",uAcento);
		printf("5. Salir\n");
		scanf("%i",&caso);
		system("cls");
		switch(caso)
		{
			case 1: 
				printf("La suma es:\t%f+%f=%f",numeros[0],numeros[1],numeros[0]+numeros[1]);
				getch();
				break;
			case 2: 
				printf("La resta es:\t%f-%f=%f",numeros[0],numeros[1],numeros[0]-numeros[1]);
				getch();
				break;
			case 3: 
				printf("La multiplicaci%cn es:\t(%f)(%f)=%f",oAcento,numeros[0],numeros[1],numeros[0]*numeros[1]);
				getch();
				break;
			case 4: 
				printf("La divisi%cn es:\t%f/%f=%f",oAcento,numeros[0],numeros[1],numeros[0]/numeros[1]);
				getch();
				break;
		}}while(caso!=5);
	return 0;
}
