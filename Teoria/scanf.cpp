// Tema: Guardar datos por teclado
// Descripción del programa/ejercicio:
// Crear un programa que le pida al usuario su edad e imprimirla en pantalla.
 
// Librerías
#include<stdio.h>
#include<conio.h>
// Función main
int main()
{
	//Creación de variables
	int edad; // creamos la variable "edad" de tipo entero
	// Le pedimos al usuario su edad
	printf("Introduce tu edad: ");
	// Guardamos lo que introduzca el usuario en la dirección de memoria de la variable edad
	scanf("%i",&edad); // scanf("%tipo_de_dato",&nombre_de_la_variable);
	// Imprimimos la edadampersand
	printf("Tu edad es de %i",edad);
	// Detenemos el programa
	getch();
	// Decimos que terminó bien 
	return 0;
}
