#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define aAcento 160 //
#define iAcento 161 //  
#define oAcento 162 //  Para los acentos y ñ
#define uAcento 163 //
#define ene 164     //
#define eAcento 130 //
void imprimir(int num); // función para imprimir los productos
void borrar(int arreglo[100],int n); // función para borrar un producto
int main()
{
	time_t t;
  	struct tm *tm;
  	char fechayhora[100];
	char nombre[50];
	int cantidades[100],total[100],precios[100],productos[100];
	int i,opc,opc_2,caso,caso_2,contador,importe_total,b=0,pago,opc_eli;
	t=time(NULL); // para la fecha y hora
  	tm=localtime(&t);
  	strftime(fechayhora, 100, "%d/%m/%Y %H:%M:%S", tm);
	printf("Buen d%ca, somos Good Bite, empresa dedicada hacer snacks de forma saludable y bajo en calorias para ti!\n",iAcento);
	printf("Cu%cl es tu nombre?\n",aAcento);
	scanf("%s",nombre);
	do{
		i=0;
		importe_total=0;
		system("cls");
		printf("Bienvenido %s te presentamos nuestro men%c\n\n",nombre,uAcento);
		printf("   Producto \t\t\tPrecio\n");
		printf("1. Manguitos enchilados \t$35\n");
		printf("2. Cacahuates sin sal \t\t$25\n");
		printf("3. Duraznos deshidratados \t$25\n");
		printf("4. Pacitas enchiladas \t\t$20\n");
		printf("5. Caramelos con estevia \t$45\n");
		printf("6. Gomitas enchilosas \t\t$40\n");
		printf("7. Nueces dulces \t\t$30\n");
		printf("8. Pepitas saladas/dulces \t$20\n");
		printf("9. Infusi%cn de frutos rojos \t$50\n",oAcento);
		printf("10.Infusi%cn de t%c \t\t$45\n\n",oAcento,eAcento);
		do{
			fflush(stdin);
			printf("Elige el n%cmero de tu producto\n",uAcento);
			scanf("%i",&caso);
			switch(caso)
			{
				case 1:
					printf("Cu%cntos Manguitos enchilados deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=35;
					total[i]=cantidades[i]*35;
					productos[i]=1;
					break;
				case 2:
					printf("Cu%cntos Cacahuates sin sal deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=25;
					total[i]=cantidades[i]*25;
					productos[i]=2;
					break;
				case 3:
					printf("Cu%cntos Duraznos deshidratados deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=25;
					total[i]=cantidades[i]*25;
					productos[i]=3;
					break;
				case 4:
					printf("Cu%cntas Pacitas enchiladas deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=20;
					total[i]=cantidades[i]*20;
					productos[i]=4;
					break;
				case 5:
					printf("Cu%cntos Caramelos con estevia deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=45;
					total[i]=cantidades[i]*45;
					productos[i]=5;
					break;
				case 6:
					printf("Cu%cntas Gomitas enchilosas deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=40;
					total[i]=cantidades[i]*40;
					productos[i]=6;
					break;
				case 7:
					printf("Cu%cntas Nueces dulces deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=30;
					total[i]=cantidades[i]*30;
					productos[i]=7;
					break;
				case 8:
					printf("Cu%cntas Pepitas saladas/dulces deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=20;
					total[i]=cantidades[i]*20;
					productos[i]=8;
					break;
				case 9:
					printf("Cu%cntas Infusiones de frutos rojos deseas?\n",aAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=50;
					total[i]=cantidades[i]*50;
					productos[i]=9;
					break;
				case 10:
					printf("Cu%cntas Infusiones de t%c deseas?\n",aAcento,eAcento);
					scanf("%i",&cantidades[i]);
					precios[i]=45;
					total[i]=cantidades[i]*45;
					productos[i]=10;
					break;
			}
			i++;
			printf("Deseas escoger otro producto?\n");
			printf("1. S%c\n",iAcento);
			printf("2. No\n");
			opc=getch();
		}while(opc!=50); // en ascii al caracter 2 le corresponde el entero 50
		system("cls");
		contador=i;
		for(i=0;i<contador;i++)
			importe_total=importe_total+total[i];
		printf("El total a pagar es de: $%i\n",importe_total);
		printf("Estas de acuerdo con la compra?\n");
		printf("1. S%c\n",iAcento);
		printf("2. No\n");
		opc_2=getch();
		if(opc_2==50) // si no está de acuerdo con la compra
		{
			system("cls");
			printf("Quieres elegir de nuevo?\n");
			printf("1. S%c\n",iAcento);
			printf("2. No\n");
			caso=getch(); // reciclamos la variable caso
			if(caso==50)
			{
				printf("Gracias, hasta luego.\n");
				b=1; // hacemos una bandera que nos indica si no quiere volver a elegir
				break;
				
			}
		}
		else // si está de acuerdo con el pago
		{
			do{
				fflush(stdin);
				system("cls");
				printf("Ingresa el dinero con el que vas a realizar el pago: ");
				scanf("%i",&pago);
				if(pago<importe_total)
				{
					printf("\nNo te alcanza. Elige una opci%cn:\n",oAcento);
					printf("1. Ingresar otra cantidad.\n");
					printf("2. No tengo el dinero suficiente.\n");
					caso=getch();
					if(caso==50)
					{
						system("cls");
						printf("Elige una opci%cn\n",oAcento);
						printf("1. Repetir la compra.\n");
						printf("2. Eliminar alg%cn producto.\n",uAcento);
						printf("3. Salir\n");
						caso_2=getch();
						if(caso_2==49)// si quiere repetir la compra salgo de los ciclos
						{
							caso=50; 
							opc_2=50;
						}
						else if(caso_2==50)
						{
							system("cls");
							printf("Selecciona el n%cmero del producto que desees eliminar\n",uAcento);
							for(i=0;i<contador;i++)
							{
								printf("%i. ",i+1);
								imprimir(productos[i]);
								printf("\n");
							}
							opc_eli=getch();
							borrar(productos,opc_eli-48);
							borrar(total,opc_eli-48);
							borrar(precios,opc_eli-48);
							borrar(cantidades,opc_eli-48);
							caso=49; 
							importe_total=0; // vaciamos el importe_total
							for(i=0;i<contador;i++) // para llenarlo con los precios que queden
								importe_total=importe_total+total[i];
						}
						else
						{
							system("cls");
							printf("Gracias por visitarnos. Vuelva pronto.");
							caso=50;
							opc_2=49;
							b=1;
						}
					}
				}
				else
					caso=50;
			}while(caso==49); // se ejecutará mientras se elija la opción de ingresar otra cantidad
		}
	}while(opc_2!=49);
	if(b!=1)
	{
		system("cls");
		printf("\t\t\t  Empresa\n");
		printf("\t\t\t Good Bite\n\n");
		printf("--------------------------------------------------------------\n");
		printf("Cliente: %s\n",nombre);
		printf("--------------------------------------------------------------\n");
		printf ("%s\n", fechayhora);
		printf("--------------------------------------------------------------\n");
		printf("Producto\t\t\t     Cantidad\tPrecio\tTotal\n");
		printf("--------------------------------------------------------------\n");
		for(i=0;i<contador;i++)
		{
			imprimir(productos[i]);
			if(productos[i]==7||productos[i]==10)
				printf("\t\t\t\t%i\t %i\t %i\n",cantidades[i],precios[i],total[i]);
			else if(productos[i]==9)
				printf("\t\t%i\t %i\t %i\n",cantidades[i],precios[i],total[i]);
			else
				printf("\t\t\t%i\t %i\t %i\n",cantidades[i],precios[i],total[i]);
		}
		printf("--------------------------------------------------------------\n");
		printf("\n\t\t\t\t\t   Total a pagar: %i\n",importe_total);
		printf("\t\t\t\t\t\tRecibido: %i\n",pago);
		printf("\t\t\t\t\t\t  Cambio: %i\n\n\n",pago-importe_total);
		printf("--------------------------------------------------------------\n");
		printf("\t\t   Gracias por su visita\n");	
		printf("\t\t       Vuelva pronto");	
	}
	return 0;
}
void imprimir(int num)
{
	if(num==1)
		printf("Manguitos enchilados");
	else if(num==2)
		printf("Cacahuates sin sal");
	else if(num==3)
		printf("Duraznos deshidratados");
	else if(num==4)
		printf("Pasitas enchiladas");
	else if(num==5)
		printf("Caramelos con estevia");
	else if(num==6)
		printf("Gomitas enchilosas");
	else if(num==7)
		printf("Nueces Dulces");
	else if(num==8)
		printf("Pepitas Saladas/Dulces");
	else if(num==9)
		printf("Infusi%cn de frutos rojos",oAcento);
	else if(num==10)
		printf("Infusi%cn de t%c",oAcento,eAcento);
	else
		printf("Compra cancelada");
}
void borrar(int arreglo[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==(n-1))
			arreglo[i]=0;
	}
}
