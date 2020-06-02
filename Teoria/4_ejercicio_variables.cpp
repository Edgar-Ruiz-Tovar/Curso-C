//Realizar un programa que le pregunte al usuario su edad y letra favorita
// y lo imprima en pantalla, primero la edad y debajo la letra
#include<stdio.h>
#include<conio.h>
int main()
{
int edad;
char letra;
printf("introduce tu edad");
scanf("%i",&edad);
fflush(stdin);
printf("introduce tu letra favorita");
scanf("%c",&letra);
printf("tu edad es %i y tu letra favorita es %c",edad,letra);
return 0;
}

